#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -188760591;
unsigned long long int var_3 = 755732117785395627ULL;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)50;
unsigned int var_16 = 4172267419U;
unsigned char var_17 = (unsigned char)159;
signed char var_18 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
