#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
_Bool var_2 = (_Bool)0;
long long int var_3 = -6319494724285464993LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)2101;
int var_7 = 973714214;
unsigned char var_9 = (unsigned char)186;
unsigned long long int var_11 = 123484395064850193ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-34;
int zero = 0;
unsigned char var_18 = (unsigned char)207;
unsigned short var_19 = (unsigned short)55144;
short var_20 = (short)14200;
void init() {
}

void checksum() {
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
