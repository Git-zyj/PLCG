#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7218;
unsigned short var_7 = (unsigned short)12671;
int var_9 = -287218425;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1230353536U;
int zero = 0;
short var_13 = (short)18588;
unsigned long long int var_14 = 12785861158261232506ULL;
short var_15 = (short)-18665;
signed char var_16 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
