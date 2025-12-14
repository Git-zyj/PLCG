#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned char var_14 = (unsigned char)253;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-63;
signed char var_18 = (signed char)14;
long long int var_19 = 8257065670369613610LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
