#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15940;
unsigned short var_1 = (unsigned short)19735;
long long int var_3 = -1426879711176521084LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4109241912049838713LL;
signed char var_8 = (signed char)-63;
long long int var_14 = 6893551161077954008LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3673390161U;
void init() {
}

void checksum() {
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
