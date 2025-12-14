#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15170220172807778231ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1648995648U;
unsigned long long int var_14 = 13908495506833086808ULL;
int zero = 0;
unsigned int var_16 = 2631063609U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
