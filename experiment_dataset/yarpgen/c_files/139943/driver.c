#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20785;
_Bool var_2 = (_Bool)1;
int var_3 = 1401398567;
int var_7 = -1431128111;
unsigned int var_9 = 2542332008U;
unsigned char var_10 = (unsigned char)114;
unsigned long long int var_12 = 10523050363282017717ULL;
int zero = 0;
unsigned long long int var_13 = 15759161524652130778ULL;
short var_14 = (short)24259;
unsigned int var_15 = 2423265893U;
void init() {
}

void checksum() {
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
