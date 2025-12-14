#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_7 = (unsigned short)48448;
signed char var_9 = (signed char)-61;
int var_12 = 1668198746;
int var_16 = -1229670348;
int zero = 0;
signed char var_18 = (signed char)92;
unsigned char var_19 = (unsigned char)117;
unsigned int var_20 = 198144171U;
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
