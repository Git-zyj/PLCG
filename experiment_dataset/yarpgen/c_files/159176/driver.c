#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15182969253257632674ULL;
unsigned char var_1 = (unsigned char)125;
signed char var_3 = (signed char)53;
unsigned int var_5 = 350060398U;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)36;
long long int var_12 = -5006698923278753707LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-9;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
