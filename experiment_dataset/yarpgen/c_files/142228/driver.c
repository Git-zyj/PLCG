#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15280870750929840715ULL;
long long int var_2 = 2319052742799883157LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)223;
short var_12 = (short)12275;
unsigned short var_14 = (unsigned short)5065;
unsigned short var_17 = (unsigned short)810;
int zero = 0;
long long int var_19 = 5054411286020451781LL;
int var_20 = 950044255;
short var_21 = (short)17480;
signed char var_22 = (signed char)0;
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
