#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4340404695615207655LL;
long long int var_7 = 1554025401941934380LL;
unsigned long long int var_8 = 1505297312050662149ULL;
long long int var_10 = 7339090216972172298LL;
unsigned char var_16 = (unsigned char)3;
int zero = 0;
unsigned long long int var_20 = 6573869636387164063ULL;
int var_21 = -457476888;
unsigned long long int var_22 = 16832190352800045277ULL;
unsigned short var_23 = (unsigned short)44452;
unsigned short var_24 = (unsigned short)4296;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
