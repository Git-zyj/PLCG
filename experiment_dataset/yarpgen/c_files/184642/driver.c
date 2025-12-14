#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 248706162U;
unsigned long long int var_6 = 8617179868923005425ULL;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
unsigned int var_18 = 3214998017U;
unsigned int var_19 = 809267558U;
signed char var_20 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
