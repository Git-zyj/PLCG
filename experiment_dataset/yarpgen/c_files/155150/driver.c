#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 970745030U;
unsigned int var_2 = 4236714583U;
unsigned int var_6 = 2299641715U;
unsigned char var_9 = (unsigned char)38;
signed char var_10 = (signed char)-9;
unsigned int var_11 = 1507034174U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 18234029295461208681ULL;
int var_14 = 1569243555;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
