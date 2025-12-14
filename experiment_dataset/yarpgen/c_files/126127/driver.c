#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
unsigned long long int var_7 = 2489501972138492799ULL;
int var_8 = 1457149144;
signed char var_10 = (signed char)101;
int var_16 = 1209932577;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
unsigned char var_20 = (unsigned char)23;
unsigned char var_21 = (unsigned char)217;
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
