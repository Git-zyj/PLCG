#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)12;
long long int var_7 = -5900981201609207677LL;
unsigned int var_9 = 2516769751U;
int var_10 = -595934565;
unsigned char var_11 = (unsigned char)209;
int zero = 0;
unsigned long long int var_12 = 7646498663621740779ULL;
int var_13 = 1046977692;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
