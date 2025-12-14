#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16703;
int var_2 = 428577282;
short var_5 = (short)29105;
unsigned int var_8 = 2003500782U;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned int var_19 = 568780794U;
long long int var_20 = 7672580058719548634LL;
void init() {
}

void checksum() {
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
