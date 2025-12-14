#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2869577378U;
long long int var_4 = -465740809369014296LL;
unsigned long long int var_7 = 143182481612094944ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1109738194367632771LL;
unsigned char var_13 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
