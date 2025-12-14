#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)107;
unsigned char var_2 = (unsigned char)112;
short var_3 = (short)19815;
unsigned short var_4 = (unsigned short)24170;
long long int var_10 = -3628416752016584867LL;
unsigned short var_12 = (unsigned short)12343;
signed char var_13 = (signed char)106;
signed char var_14 = (signed char)-44;
unsigned int var_16 = 3442020567U;
int zero = 0;
signed char var_18 = (signed char)-23;
_Bool var_19 = (_Bool)0;
long long int var_20 = 5807447456142856942LL;
signed char var_21 = (signed char)33;
unsigned char var_22 = (unsigned char)200;
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
