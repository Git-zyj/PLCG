#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12757898070970013338ULL;
signed char var_5 = (signed char)118;
int var_6 = -1275686273;
unsigned short var_9 = (unsigned short)53610;
int zero = 0;
long long int var_13 = -4066986755371490255LL;
unsigned char var_14 = (unsigned char)31;
unsigned short var_15 = (unsigned short)51631;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
