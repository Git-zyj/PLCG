#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1870723577U;
_Bool var_2 = (_Bool)0;
int var_6 = 2019918986;
unsigned int var_8 = 3580664521U;
long long int var_9 = -2227837158123957746LL;
unsigned short var_10 = (unsigned short)28418;
unsigned short var_11 = (unsigned short)2061;
int var_13 = -1062988412;
long long int var_17 = -7112266652146775060LL;
int zero = 0;
signed char var_18 = (signed char)-19;
short var_19 = (short)18691;
unsigned char var_20 = (unsigned char)182;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
