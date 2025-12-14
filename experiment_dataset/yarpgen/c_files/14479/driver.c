#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7671;
unsigned int var_3 = 3569803165U;
unsigned char var_6 = (unsigned char)114;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)240;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)87;
int zero = 0;
unsigned long long int var_14 = 1037063598128729703ULL;
unsigned int var_15 = 3210076458U;
unsigned long long int var_16 = 11938623291015125724ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
