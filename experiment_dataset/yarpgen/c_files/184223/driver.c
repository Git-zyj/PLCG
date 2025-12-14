#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20378;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)35;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13621170532879713117ULL;
unsigned short var_11 = (unsigned short)28837;
unsigned char var_14 = (unsigned char)88;
unsigned short var_15 = (unsigned short)22225;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
