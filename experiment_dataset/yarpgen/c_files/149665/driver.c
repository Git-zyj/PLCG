#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)-20419;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 4122755390U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-89;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
unsigned long long int var_20 = 18307254943991401059ULL;
void init() {
}

void checksum() {
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
