#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2095503939;
unsigned long long int var_6 = 8156456573675214231ULL;
unsigned long long int var_7 = 4847406719023132722ULL;
unsigned char var_10 = (unsigned char)110;
long long int var_11 = 6391490715839367938LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2096951160U;
short var_14 = (short)10937;
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
