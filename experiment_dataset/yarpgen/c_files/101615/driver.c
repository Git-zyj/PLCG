#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14047;
short var_2 = (short)22294;
signed char var_3 = (signed char)-58;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-17394;
unsigned short var_10 = (unsigned short)50690;
unsigned int var_15 = 229983776U;
signed char var_18 = (signed char)-92;
short var_19 = (short)-13701;
int zero = 0;
unsigned long long int var_20 = 3436792319249620756ULL;
short var_21 = (short)3120;
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
