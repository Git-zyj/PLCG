#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
signed char var_3 = (signed char)-126;
unsigned short var_4 = (unsigned short)52322;
unsigned char var_16 = (unsigned char)79;
unsigned long long int var_18 = 4596398167719239907ULL;
int zero = 0;
signed char var_20 = (signed char)124;
signed char var_21 = (signed char)123;
signed char var_22 = (signed char)-40;
unsigned long long int var_23 = 12634886368402980540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
