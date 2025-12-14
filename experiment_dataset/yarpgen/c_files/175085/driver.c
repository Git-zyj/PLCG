#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-120;
unsigned short var_3 = (unsigned short)43017;
signed char var_9 = (signed char)33;
long long int var_11 = 3086286890047282029LL;
signed char var_15 = (signed char)-80;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)137;
unsigned char var_20 = (unsigned char)165;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
