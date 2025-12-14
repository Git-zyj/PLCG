#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)20;
unsigned long long int var_12 = 15934784589006746977ULL;
signed char var_18 = (signed char)77;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
long long int var_20 = 4491168183625360610LL;
unsigned int var_21 = 3850466236U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
