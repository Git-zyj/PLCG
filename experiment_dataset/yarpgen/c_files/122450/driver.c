#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)40;
unsigned char var_5 = (unsigned char)161;
unsigned long long int var_9 = 12814607069286099603ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)122;
unsigned int var_12 = 3683549762U;
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
