#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7962356563679622936LL;
short var_2 = (short)-16863;
signed char var_3 = (signed char)-72;
int var_4 = 1402495824;
unsigned long long int var_6 = 16052297354369825421ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 2500701951U;
int zero = 0;
unsigned long long int var_20 = 15130195181235604870ULL;
short var_21 = (short)-29836;
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
