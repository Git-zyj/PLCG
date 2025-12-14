#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
signed char var_3 = (signed char)-77;
unsigned long long int var_6 = 5173070410243835948ULL;
_Bool var_8 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8798020543277856190LL;
signed char var_22 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
