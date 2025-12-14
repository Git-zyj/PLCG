#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4047590847U;
signed char var_4 = (signed char)-33;
unsigned int var_5 = 3941086106U;
signed char var_14 = (signed char)32;
int zero = 0;
signed char var_16 = (signed char)112;
unsigned int var_17 = 4215452854U;
unsigned int var_18 = 4161546303U;
signed char var_19 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
