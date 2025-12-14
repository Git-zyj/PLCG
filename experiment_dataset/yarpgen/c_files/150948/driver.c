#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15413889240771645772ULL;
unsigned short var_1 = (unsigned short)25994;
short var_3 = (short)-24591;
short var_8 = (short)-14236;
unsigned int var_9 = 3414255844U;
long long int var_14 = 8973261356234301420LL;
signed char var_16 = (signed char)-45;
int zero = 0;
long long int var_17 = -1011099968576242830LL;
unsigned long long int var_18 = 16280362540017704813ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
