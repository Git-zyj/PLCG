#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54257;
unsigned int var_6 = 3909855343U;
unsigned char var_10 = (unsigned char)52;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)39996;
short var_21 = (short)7965;
unsigned long long int var_22 = 577336201600322408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
