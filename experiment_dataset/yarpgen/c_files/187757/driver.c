#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -975905049;
unsigned short var_4 = (unsigned short)4476;
unsigned char var_6 = (unsigned char)51;
unsigned int var_8 = 1597436256U;
unsigned int var_11 = 2106175506U;
long long int var_13 = -8955560586776218470LL;
signed char var_15 = (signed char)84;
int zero = 0;
signed char var_16 = (signed char)55;
long long int var_17 = 3867627857052028504LL;
short var_18 = (short)-11981;
signed char var_19 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
