#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2376959484U;
unsigned short var_10 = (unsigned short)54848;
unsigned long long int var_11 = 5531285800501634870ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1331236992U;
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
