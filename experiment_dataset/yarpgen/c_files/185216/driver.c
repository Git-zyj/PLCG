#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
unsigned char var_4 = (unsigned char)56;
_Bool var_6 = (_Bool)0;
short var_10 = (short)-24505;
unsigned int var_11 = 90989258U;
int zero = 0;
unsigned long long int var_12 = 4489694649905685949ULL;
short var_13 = (short)-13758;
long long int var_14 = -3775185355425291816LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
