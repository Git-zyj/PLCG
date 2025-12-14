#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)32910;
unsigned short var_9 = (unsigned short)2348;
int zero = 0;
unsigned int var_14 = 2706725845U;
unsigned char var_15 = (unsigned char)45;
int var_16 = -769777522;
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
