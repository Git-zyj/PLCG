#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
signed char var_1 = (signed char)-79;
signed char var_8 = (signed char)-42;
signed char var_10 = (signed char)121;
int var_11 = -1845244958;
unsigned long long int var_12 = 9617552543635912950ULL;
signed char var_14 = (signed char)-33;
int zero = 0;
signed char var_15 = (signed char)55;
signed char var_16 = (signed char)-12;
unsigned short var_17 = (unsigned short)15547;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
