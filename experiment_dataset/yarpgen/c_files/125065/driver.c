#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2257;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)14947;
int zero = 0;
short var_13 = (short)17276;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3474856865304076462ULL;
unsigned short var_16 = (unsigned short)22326;
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
