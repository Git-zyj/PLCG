#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned long long int var_3 = 16216807052379493037ULL;
signed char var_5 = (signed char)-21;
signed char var_6 = (signed char)-8;
signed char var_13 = (signed char)10;
unsigned long long int var_14 = 17928217246873644826ULL;
unsigned long long int var_15 = 11650338637766853155ULL;
int zero = 0;
signed char var_20 = (signed char)51;
signed char var_21 = (signed char)63;
signed char var_22 = (signed char)51;
unsigned long long int var_23 = 7403669353752649808ULL;
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
