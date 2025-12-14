#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 7919860950633022242LL;
unsigned int var_2 = 4018773774U;
signed char var_3 = (signed char)-97;
unsigned long long int var_4 = 3138869964702420204ULL;
short var_7 = (short)-15570;
unsigned long long int var_10 = 10286076287704892078ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)169;
signed char var_15 = (signed char)11;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2443768928005640067LL;
void init() {
}

void checksum() {
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
