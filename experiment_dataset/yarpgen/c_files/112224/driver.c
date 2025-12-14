#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 365614786;
unsigned int var_4 = 3604928973U;
unsigned short var_5 = (unsigned short)38342;
short var_8 = (short)-22833;
unsigned int var_10 = 3030120106U;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-39;
unsigned long long int var_15 = 6663610666447840849ULL;
long long int var_16 = 1134326155660034091LL;
unsigned short var_17 = (unsigned short)49727;
signed char var_18 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
