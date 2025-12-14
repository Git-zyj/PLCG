#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10455661282542933527ULL;
unsigned int var_8 = 2666215723U;
signed char var_11 = (signed char)28;
int zero = 0;
unsigned short var_18 = (unsigned short)57237;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)152;
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
