#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-55;
signed char var_7 = (signed char)-36;
unsigned short var_10 = (unsigned short)28080;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
long long int var_16 = -7657984273102645989LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4476826250308417868ULL;
signed char var_19 = (signed char)36;
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
