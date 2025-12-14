#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2344612954U;
signed char var_7 = (signed char)71;
int var_10 = -1191830608;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4037487414U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)2357;
unsigned char var_19 = (unsigned char)118;
unsigned short var_20 = (unsigned short)16128;
unsigned char var_21 = (unsigned char)0;
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
