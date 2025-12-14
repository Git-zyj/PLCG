#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17549;
unsigned int var_7 = 349081598U;
short var_9 = (short)-18329;
short var_10 = (short)10263;
unsigned int var_12 = 1987319171U;
int zero = 0;
unsigned long long int var_17 = 13700772050530487743ULL;
unsigned char var_18 = (unsigned char)252;
unsigned long long int var_19 = 10913745547473213003ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
