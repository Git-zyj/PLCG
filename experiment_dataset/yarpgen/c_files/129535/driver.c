#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56074;
unsigned char var_4 = (unsigned char)107;
unsigned int var_6 = 2688989084U;
unsigned short var_9 = (unsigned short)38953;
unsigned short var_10 = (unsigned short)54396;
int zero = 0;
unsigned long long int var_18 = 12697380186764458195ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 657399623;
int var_21 = -1042211374;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
