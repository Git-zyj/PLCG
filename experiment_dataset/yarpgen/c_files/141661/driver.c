#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
signed char var_2 = (signed char)-113;
int var_5 = -1506945325;
unsigned long long int var_8 = 15648032707578259985ULL;
short var_11 = (short)-18374;
unsigned int var_12 = 530353224U;
short var_14 = (short)26373;
int zero = 0;
unsigned long long int var_15 = 13938270148461156169ULL;
short var_16 = (short)-781;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
