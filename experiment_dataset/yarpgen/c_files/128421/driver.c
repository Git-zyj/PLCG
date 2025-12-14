#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
unsigned long long int var_5 = 1410556053227891585ULL;
signed char var_8 = (signed char)-114;
int zero = 0;
long long int var_20 = -2175638744892518364LL;
long long int var_21 = -5259397317808292810LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
