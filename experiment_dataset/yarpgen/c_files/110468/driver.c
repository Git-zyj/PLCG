#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26813;
long long int var_2 = 9046977751996137672LL;
unsigned int var_4 = 745400483U;
signed char var_7 = (signed char)39;
unsigned int var_8 = 2490461230U;
unsigned int var_9 = 2521522102U;
unsigned char var_11 = (unsigned char)203;
unsigned int var_12 = 788900898U;
int zero = 0;
unsigned char var_13 = (unsigned char)100;
int var_14 = 1323913278;
_Bool var_15 = (_Bool)1;
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
