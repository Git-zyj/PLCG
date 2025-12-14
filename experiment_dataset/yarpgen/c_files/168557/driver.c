#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6502969643875604046ULL;
long long int var_4 = -4875162051636609905LL;
unsigned char var_5 = (unsigned char)77;
unsigned char var_7 = (unsigned char)104;
unsigned char var_8 = (unsigned char)162;
long long int var_9 = -8236880847528815654LL;
unsigned char var_10 = (unsigned char)13;
long long int var_11 = -3079444185278218811LL;
long long int var_15 = -9054128622416541639LL;
int zero = 0;
short var_17 = (short)-2999;
unsigned char var_18 = (unsigned char)5;
signed char var_19 = (signed char)-65;
unsigned int var_20 = 200805020U;
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
