#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17250760266924404196ULL;
short var_8 = (short)1921;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
unsigned int var_19 = 3377897511U;
unsigned char var_20 = (unsigned char)121;
signed char var_21 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
