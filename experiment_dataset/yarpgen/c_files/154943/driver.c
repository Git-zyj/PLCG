#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
signed char var_3 = (signed char)103;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)65;
long long int var_13 = -6812529411484875033LL;
signed char var_14 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
