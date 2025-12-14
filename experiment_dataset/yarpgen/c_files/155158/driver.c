#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1075328840868497681LL;
unsigned short var_3 = (unsigned short)35460;
unsigned int var_7 = 1395734684U;
long long int var_8 = 5590674577125602905LL;
signed char var_9 = (signed char)100;
unsigned int var_15 = 1016539364U;
unsigned int var_17 = 1942657788U;
int zero = 0;
unsigned int var_18 = 592288063U;
long long int var_19 = 1518509645166646992LL;
signed char var_20 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
