#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1285348285U;
short var_5 = (short)27638;
signed char var_8 = (signed char)74;
unsigned long long int var_12 = 521772048209245330ULL;
short var_15 = (short)-1239;
int zero = 0;
unsigned int var_18 = 1892414668U;
unsigned short var_19 = (unsigned short)13706;
unsigned long long int var_20 = 6706414151508470680ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
