#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44971;
int var_2 = 1475927320;
long long int var_3 = -3830437969460219659LL;
unsigned int var_5 = 1775704749U;
long long int var_7 = -8079962101713627250LL;
unsigned short var_8 = (unsigned short)64275;
unsigned short var_9 = (unsigned short)49077;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
unsigned char var_11 = (unsigned char)163;
unsigned short var_12 = (unsigned short)34392;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
