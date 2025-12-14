#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
unsigned int var_3 = 2835439898U;
unsigned int var_7 = 456514127U;
unsigned int var_9 = 4236204202U;
long long int var_10 = 6059227132161394243LL;
int zero = 0;
unsigned short var_15 = (unsigned short)37718;
unsigned int var_16 = 309065490U;
long long int var_17 = 2840017237685043422LL;
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
