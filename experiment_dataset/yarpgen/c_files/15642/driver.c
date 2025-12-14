#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned int var_1 = 3909798850U;
short var_4 = (short)13234;
unsigned int var_5 = 2336386384U;
short var_6 = (short)28392;
long long int var_8 = -2898096537131193198LL;
short var_10 = (short)-7892;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-24920;
int zero = 0;
unsigned short var_16 = (unsigned short)5267;
int var_17 = 1911405026;
signed char var_18 = (signed char)-31;
short var_19 = (short)12161;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
