#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)153;
signed char var_5 = (signed char)33;
unsigned long long int var_6 = 11582795543177290730ULL;
unsigned int var_9 = 1665546857U;
unsigned char var_11 = (unsigned char)192;
unsigned char var_12 = (unsigned char)70;
int var_14 = -793371114;
int zero = 0;
int var_16 = -696687155;
unsigned long long int var_17 = 17239359602898880476ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11483463002736803015ULL;
signed char var_20 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
