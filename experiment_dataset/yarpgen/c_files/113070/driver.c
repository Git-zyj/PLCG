#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 385800151U;
unsigned short var_2 = (unsigned short)23944;
signed char var_3 = (signed char)106;
int var_5 = 2013627377;
signed char var_10 = (signed char)113;
int zero = 0;
unsigned int var_16 = 674055352U;
signed char var_17 = (signed char)-63;
signed char var_18 = (signed char)-79;
signed char var_19 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
