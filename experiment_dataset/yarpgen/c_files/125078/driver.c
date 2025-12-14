#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
short var_1 = (short)27450;
unsigned int var_5 = 149035592U;
short var_6 = (short)-4591;
short var_7 = (short)12804;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)66;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 7876286737872982990ULL;
unsigned long long int var_12 = 11356788512183463048ULL;
signed char var_13 = (signed char)36;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3563834786U;
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
