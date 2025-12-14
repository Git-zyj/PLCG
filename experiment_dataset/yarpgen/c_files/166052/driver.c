#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2742459166129872066LL;
int var_6 = 1838491217;
unsigned int var_8 = 683810241U;
unsigned char var_11 = (unsigned char)153;
long long int var_13 = -5615052761674678851LL;
signed char var_18 = (signed char)64;
int zero = 0;
signed char var_20 = (signed char)-116;
signed char var_21 = (signed char)43;
unsigned int var_22 = 4226042473U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
