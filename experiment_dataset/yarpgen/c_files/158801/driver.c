#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8905222538359157840LL;
unsigned int var_3 = 2445189324U;
signed char var_4 = (signed char)-45;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
long long int var_13 = 1038837483061388816LL;
unsigned long long int var_14 = 11414745468567431693ULL;
void init() {
}

void checksum() {
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
