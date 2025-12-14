#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40348;
unsigned long long int var_7 = 9117046328329007713ULL;
unsigned int var_8 = 201635202U;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1312293632093986402LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
