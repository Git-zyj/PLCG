#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-95;
unsigned int var_6 = 2701268965U;
unsigned int var_11 = 3438383673U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 809499957850804093ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
