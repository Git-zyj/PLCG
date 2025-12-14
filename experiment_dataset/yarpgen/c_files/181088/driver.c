#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8052891150488960703ULL;
int zero = 0;
unsigned long long int var_20 = 1870347279412505744ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6879900148865064549ULL;
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
