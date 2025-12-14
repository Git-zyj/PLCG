#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17687;
unsigned long long int var_4 = 8151337845342817560ULL;
int var_7 = -1117625083;
long long int var_9 = -6487127029044943581LL;
unsigned short var_10 = (unsigned short)29877;
short var_13 = (short)23352;
int zero = 0;
short var_17 = (short)21543;
signed char var_18 = (signed char)-76;
unsigned long long int var_19 = 784947048775504225ULL;
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
