#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1001819354102177045ULL;
unsigned int var_3 = 3185070794U;
signed char var_4 = (signed char)-41;
short var_6 = (short)-8063;
short var_7 = (short)-3550;
signed char var_11 = (signed char)6;
int zero = 0;
short var_13 = (short)10872;
unsigned int var_14 = 3917636613U;
short var_15 = (short)-25696;
long long int var_16 = 5185023435452528922LL;
long long int var_17 = -2400968410997368902LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
