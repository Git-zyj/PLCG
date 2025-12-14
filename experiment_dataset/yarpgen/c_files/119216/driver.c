#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
signed char var_1 = (signed char)-70;
unsigned short var_2 = (unsigned short)46042;
short var_3 = (short)-29114;
int var_4 = 656526491;
signed char var_6 = (signed char)-56;
unsigned int var_7 = 3852693450U;
long long int var_8 = 2910350957081088761LL;
int zero = 0;
unsigned short var_10 = (unsigned short)63923;
unsigned long long int var_11 = 8905454962889202193ULL;
int var_12 = -523104224;
long long int var_13 = 4234149327040276549LL;
int var_14 = 1756850373;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
