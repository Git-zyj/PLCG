#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1422639213;
unsigned short var_4 = (unsigned short)26136;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2228921426U;
unsigned long long int var_12 = 9803831114708402191ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
