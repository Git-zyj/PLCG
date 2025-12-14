#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
short var_2 = (short)19628;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)86;
signed char var_9 = (signed char)4;
int zero = 0;
signed char var_10 = (signed char)35;
unsigned long long int var_11 = 16707754853876237859ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
