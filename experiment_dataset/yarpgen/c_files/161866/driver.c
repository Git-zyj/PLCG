#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6416081676236046101LL;
unsigned long long int var_7 = 13262707671018432736ULL;
unsigned short var_8 = (unsigned short)42251;
int var_17 = -1729623949;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1987921991;
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
