#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_2 = 13183886923438381855ULL;
unsigned char var_3 = (unsigned char)209;
short var_5 = (short)20273;
unsigned int var_8 = 3286412780U;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-4209;
_Bool var_12 = (_Bool)1;
int var_13 = -842502858;
signed char var_14 = (signed char)35;
unsigned int var_15 = 2994692448U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
