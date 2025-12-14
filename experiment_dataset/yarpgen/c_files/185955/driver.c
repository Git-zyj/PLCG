#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -663098516;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-107;
unsigned int var_5 = 611613611U;
long long int var_7 = 8489576233761381106LL;
int zero = 0;
short var_10 = (short)11333;
unsigned short var_11 = (unsigned short)2909;
unsigned short var_12 = (unsigned short)32482;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6959683956139908578LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
