#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
signed char var_2 = (signed char)57;
int var_4 = -2068417200;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)6;
unsigned long long int var_7 = 3087426379485542861ULL;
unsigned int var_8 = 1218596322U;
unsigned char var_9 = (unsigned char)132;
unsigned long long int var_10 = 14155624914405209382ULL;
int var_12 = -303931396;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 13031612038391915962ULL;
signed char var_18 = (signed char)2;
short var_19 = (short)-5733;
void init() {
}

void checksum() {
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
