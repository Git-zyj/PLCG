#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
unsigned int var_3 = 3043495843U;
unsigned int var_5 = 3735615434U;
unsigned char var_7 = (unsigned char)23;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)3;
signed char var_13 = (signed char)-54;
unsigned long long int var_14 = 17575990050049894783ULL;
unsigned long long int var_16 = 7200226653479453465ULL;
int zero = 0;
unsigned int var_17 = 2765646416U;
int var_18 = 1499457882;
long long int var_19 = -7995376938901212572LL;
unsigned long long int var_20 = 2383374077504492911ULL;
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
