#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
int var_3 = -1216503081;
unsigned short var_7 = (unsigned short)60170;
unsigned int var_8 = 2539064801U;
int var_10 = -2036377307;
_Bool var_12 = (_Bool)1;
int var_14 = 904784657;
int zero = 0;
unsigned int var_18 = 2201311680U;
unsigned int var_19 = 4253737437U;
unsigned short var_20 = (unsigned short)15712;
void init() {
}

void checksum() {
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
