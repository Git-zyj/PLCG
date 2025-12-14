#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4114383004U;
unsigned int var_2 = 103346535U;
unsigned char var_3 = (unsigned char)234;
_Bool var_4 = (_Bool)0;
int zero = 0;
long long int var_17 = 5930718242002129141LL;
int var_18 = 1536067296;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
