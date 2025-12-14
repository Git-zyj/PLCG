#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12774961817753242745ULL;
long long int var_6 = -8331273939670644247LL;
unsigned long long int var_7 = 4377178996319650171ULL;
unsigned char var_8 = (unsigned char)168;
long long int var_12 = 164086279298102032LL;
unsigned long long int var_13 = 14931651170411311907ULL;
unsigned short var_14 = (unsigned short)27523;
int var_16 = -1195424758;
int zero = 0;
int var_17 = 552810754;
signed char var_18 = (signed char)88;
long long int var_19 = 8007374651546599820LL;
int var_20 = 33720838;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
