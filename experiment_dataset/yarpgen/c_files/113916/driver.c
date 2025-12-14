#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1291620517U;
unsigned int var_5 = 1971248103U;
unsigned char var_8 = (unsigned char)161;
unsigned char var_14 = (unsigned char)228;
long long int var_17 = -4718090751293376711LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-84;
unsigned int var_20 = 837345441U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
