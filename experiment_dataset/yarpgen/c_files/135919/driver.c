#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 190371213734633890ULL;
unsigned short var_3 = (unsigned short)10160;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2808219239U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 4502059670906165332ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
