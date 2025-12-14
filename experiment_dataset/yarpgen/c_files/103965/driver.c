#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 85010559U;
short var_15 = (short)712;
unsigned char var_16 = (unsigned char)110;
int zero = 0;
unsigned int var_20 = 556924848U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2731465903U;
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
