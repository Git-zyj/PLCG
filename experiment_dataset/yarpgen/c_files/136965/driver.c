#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 4417860290822328854LL;
signed char var_4 = (signed char)-126;
unsigned short var_5 = (unsigned short)12226;
unsigned int var_7 = 169262074U;
signed char var_14 = (signed char)57;
long long int var_15 = 4274159830872747091LL;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
long long int var_18 = 7136410948213738235LL;
unsigned short var_19 = (unsigned short)30006;
short var_20 = (short)10124;
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
