#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5787;
signed char var_4 = (signed char)-74;
short var_10 = (short)466;
int var_16 = 1760001291;
int zero = 0;
long long int var_17 = -61594963285165807LL;
unsigned short var_18 = (unsigned short)3210;
signed char var_19 = (signed char)(-127 - 1);
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
