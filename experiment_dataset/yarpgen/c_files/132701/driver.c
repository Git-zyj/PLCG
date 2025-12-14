#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
int var_1 = 1149435576;
unsigned int var_2 = 3939596321U;
unsigned int var_5 = 2790471358U;
short var_7 = (short)16666;
unsigned short var_11 = (unsigned short)57337;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14214412834019957288ULL;
signed char var_17 = (signed char)-114;
int zero = 0;
short var_20 = (short)22324;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 744684967U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
