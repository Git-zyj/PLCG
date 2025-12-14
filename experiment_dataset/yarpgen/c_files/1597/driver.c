#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -602929806;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_11 = -7988340023215787899LL;
unsigned int var_12 = 344144521U;
unsigned char var_13 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
