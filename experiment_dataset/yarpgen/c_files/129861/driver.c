#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 972285662U;
signed char var_3 = (signed char)12;
signed char var_4 = (signed char)116;
int var_6 = 744988686;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 13443251504726475709ULL;
int var_10 = 1217603954;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-530;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)229;
short var_22 = (short)-17323;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
