#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 408634814U;
signed char var_4 = (signed char)117;
signed char var_5 = (signed char)68;
unsigned long long int var_8 = 11515912330937794507ULL;
unsigned long long int var_10 = 11820824853978830074ULL;
long long int var_12 = -5421414701582178625LL;
unsigned char var_13 = (unsigned char)167;
int zero = 0;
int var_14 = -1173647535;
unsigned long long int var_15 = 14404255486454993836ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
