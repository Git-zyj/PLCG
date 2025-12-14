#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_8 = (unsigned char)228;
int var_9 = -812869657;
unsigned long long int var_13 = 4673839080631251842ULL;
unsigned char var_18 = (unsigned char)255;
int zero = 0;
unsigned int var_20 = 1201251625U;
signed char var_21 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
