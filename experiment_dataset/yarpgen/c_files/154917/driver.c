#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4859;
int var_1 = -83568578;
long long int var_2 = 4509842132460317929LL;
int var_3 = 855006983;
_Bool var_4 = (_Bool)0;
int var_5 = -20671138;
int var_6 = 620422564;
int var_7 = -840997240;
long long int var_8 = 6177978234348890410LL;
int var_11 = 798860663;
signed char var_12 = (signed char)-4;
unsigned int var_13 = 3755401819U;
unsigned int var_14 = 2927372127U;
int zero = 0;
signed char var_16 = (signed char)-114;
unsigned short var_17 = (unsigned short)27205;
unsigned char var_18 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
