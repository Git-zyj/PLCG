#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7331965815059005568LL;
long long int var_2 = -8982649741074082771LL;
unsigned short var_5 = (unsigned short)18828;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)15008;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)21623;
int var_15 = 450083828;
unsigned short var_16 = (unsigned short)26426;
unsigned char var_17 = (unsigned char)215;
int zero = 0;
unsigned int var_18 = 1477902585U;
unsigned short var_19 = (unsigned short)44986;
unsigned int var_20 = 3842419264U;
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
