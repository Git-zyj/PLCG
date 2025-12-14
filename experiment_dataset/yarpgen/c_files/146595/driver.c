#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 46232279U;
int var_3 = -674818680;
unsigned short var_4 = (unsigned short)61141;
unsigned int var_5 = 3880217230U;
unsigned char var_8 = (unsigned char)102;
unsigned long long int var_9 = 10015982757746802444ULL;
unsigned int var_10 = 550161026U;
int zero = 0;
unsigned char var_11 = (unsigned char)111;
int var_12 = -145485445;
unsigned long long int var_13 = 6557997160922753802ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
