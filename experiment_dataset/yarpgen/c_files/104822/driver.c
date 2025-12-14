#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14798932159468735807ULL;
unsigned long long int var_3 = 10912513243757743646ULL;
short var_8 = (short)-12915;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 466065122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
