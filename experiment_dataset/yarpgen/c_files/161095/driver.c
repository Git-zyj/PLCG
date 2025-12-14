#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12820166410078247080ULL;
signed char var_2 = (signed char)-2;
unsigned char var_4 = (unsigned char)181;
unsigned long long int var_5 = 5558426671218099020ULL;
unsigned char var_6 = (unsigned char)201;
_Bool var_8 = (_Bool)1;
int var_10 = -2105126491;
unsigned int var_12 = 3650626351U;
int zero = 0;
unsigned char var_13 = (unsigned char)162;
long long int var_14 = -6101837301935576621LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
