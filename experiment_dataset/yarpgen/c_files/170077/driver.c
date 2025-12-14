#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)100;
short var_6 = (short)-5849;
_Bool var_10 = (_Bool)0;
long long int var_11 = 202567740108940989LL;
short var_12 = (short)-24407;
int zero = 0;
unsigned long long int var_13 = 12264512778088347806ULL;
short var_14 = (short)-14380;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
