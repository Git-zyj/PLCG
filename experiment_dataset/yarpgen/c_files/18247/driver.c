#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned int var_4 = 3551430881U;
unsigned short var_8 = (unsigned short)50868;
int var_10 = 639941248;
unsigned char var_11 = (unsigned char)229;
long long int var_13 = 5889563820099882114LL;
long long int var_16 = 5021316565746078586LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 308099462;
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
