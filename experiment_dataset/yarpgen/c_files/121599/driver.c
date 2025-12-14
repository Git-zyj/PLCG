#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)39;
long long int var_14 = -2324042721239445665LL;
unsigned long long int var_16 = 6601920743721809615ULL;
unsigned int var_17 = 23474028U;
signed char var_18 = (signed char)-35;
long long int var_19 = 8915371151969362455LL;
int zero = 0;
unsigned int var_20 = 1993440204U;
signed char var_21 = (signed char)-38;
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
