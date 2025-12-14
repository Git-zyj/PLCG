#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3258042498U;
long long int var_4 = 7988092498376099168LL;
unsigned int var_6 = 2905879419U;
signed char var_16 = (signed char)-48;
int zero = 0;
unsigned long long int var_18 = 16790799704569282019ULL;
signed char var_19 = (signed char)55;
void init() {
}

void checksum() {
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
