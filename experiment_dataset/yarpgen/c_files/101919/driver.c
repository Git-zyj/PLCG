#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -897445784;
unsigned char var_4 = (unsigned char)84;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)66;
long long int var_9 = -2312739783490645998LL;
long long int var_10 = -793741237841342738LL;
int var_14 = 1009126478;
int var_15 = -772305924;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-67;
signed char var_19 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
