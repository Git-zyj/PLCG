#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3671747711U;
int var_12 = -2019171619;
int var_13 = 1637334078;
int var_14 = 1280634152;
int var_16 = 408857137;
int zero = 0;
unsigned short var_17 = (unsigned short)38186;
int var_18 = 176327014;
long long int var_19 = -3636470729562377560LL;
unsigned long long int var_20 = 14734653821841778769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
