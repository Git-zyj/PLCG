#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)3465;
long long int var_6 = 7081060654653269234LL;
long long int var_10 = 1629270897492887332LL;
unsigned long long int var_11 = 17515560322422308198ULL;
int var_12 = 637550016;
int zero = 0;
unsigned long long int var_15 = 10259802190248122744ULL;
unsigned int var_16 = 3352375691U;
unsigned int var_17 = 106576138U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
