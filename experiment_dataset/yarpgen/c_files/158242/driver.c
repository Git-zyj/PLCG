#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
signed char var_3 = (signed char)33;
signed char var_10 = (signed char)-45;
short var_11 = (short)-23491;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
unsigned long long int var_14 = 16432950284385465769ULL;
long long int var_15 = -1844740088777872714LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
