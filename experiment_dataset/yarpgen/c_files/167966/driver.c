#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-95;
unsigned int var_4 = 43981291U;
int var_8 = 201191592;
unsigned short var_9 = (unsigned short)10008;
unsigned char var_12 = (unsigned char)13;
int var_14 = -1578471510;
int var_16 = -756849060;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)20;
unsigned short var_20 = (unsigned short)19723;
int var_21 = -56493710;
unsigned int var_22 = 2496030066U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
