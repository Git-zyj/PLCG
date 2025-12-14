#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7238840954250939766LL;
signed char var_1 = (signed char)-38;
int var_6 = 486002676;
unsigned int var_8 = 2551654080U;
unsigned char var_10 = (unsigned char)152;
int zero = 0;
unsigned short var_14 = (unsigned short)6775;
int var_15 = 2094414492;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
