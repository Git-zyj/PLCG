#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -3839808135797826191LL;
unsigned char var_5 = (unsigned char)71;
unsigned char var_6 = (unsigned char)233;
short var_7 = (short)-5509;
int var_8 = 430188644;
int zero = 0;
signed char var_11 = (signed char)-58;
unsigned int var_12 = 3594742047U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
