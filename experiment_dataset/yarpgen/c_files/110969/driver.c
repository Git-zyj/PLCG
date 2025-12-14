#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1770;
unsigned char var_13 = (unsigned char)209;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 7715460069765080166ULL;
unsigned short var_20 = (unsigned short)29542;
void init() {
}

void checksum() {
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
