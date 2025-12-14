#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9370;
long long int var_1 = 9174154071524482678LL;
short var_2 = (short)-9472;
int var_4 = -2030758720;
signed char var_10 = (signed char)8;
signed char var_11 = (signed char)4;
unsigned int var_13 = 630334307U;
int zero = 0;
unsigned int var_19 = 762287476U;
unsigned int var_20 = 605519123U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
