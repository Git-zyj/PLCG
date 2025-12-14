#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45245;
signed char var_4 = (signed char)12;
unsigned short var_10 = (unsigned short)22341;
unsigned short var_14 = (unsigned short)52717;
signed char var_18 = (signed char)125;
int zero = 0;
short var_19 = (short)-1624;
long long int var_20 = 6201931812021365359LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3661259792701304055ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
