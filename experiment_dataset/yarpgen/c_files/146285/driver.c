#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1753;
short var_3 = (short)-22569;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1507191702U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4052065111U;
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
