#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-105;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)51955;
unsigned long long int var_9 = 2759193755686187628ULL;
signed char var_11 = (signed char)-20;
unsigned short var_12 = (unsigned short)5303;
int var_13 = -17644542;
short var_14 = (short)14425;
short var_15 = (short)-9246;
int zero = 0;
long long int var_20 = -9063483134703195003LL;
unsigned long long int var_21 = 11254078316987464186ULL;
void init() {
}

void checksum() {
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
