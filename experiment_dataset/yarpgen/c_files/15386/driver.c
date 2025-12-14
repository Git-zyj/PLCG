#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
_Bool var_1 = (_Bool)1;
int var_2 = -1928279374;
unsigned long long int var_4 = 7791356804510881844ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)254;
int zero = 0;
unsigned short var_10 = (unsigned short)27301;
unsigned int var_11 = 793868053U;
int var_12 = -1714006510;
signed char var_13 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
