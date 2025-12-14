#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5238;
int var_8 = 1832313052;
unsigned short var_9 = (unsigned short)15206;
signed char var_13 = (signed char)82;
unsigned char var_14 = (unsigned char)232;
unsigned int var_15 = 4221306901U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1761867386;
signed char var_21 = (signed char)94;
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
