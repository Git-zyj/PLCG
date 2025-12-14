#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3149663583499933743LL;
unsigned short var_1 = (unsigned short)64486;
unsigned short var_3 = (unsigned short)33831;
unsigned char var_5 = (unsigned char)80;
long long int var_8 = 26910304671227166LL;
short var_9 = (short)628;
unsigned short var_11 = (unsigned short)42813;
int zero = 0;
signed char var_12 = (signed char)8;
unsigned long long int var_13 = 13028727604936475853ULL;
short var_14 = (short)11625;
unsigned long long int var_15 = 5556512602659133961ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
