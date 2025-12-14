#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8940294355519300634LL;
unsigned long long int var_5 = 9363003897869978612ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)5823;
signed char var_21 = (signed char)73;
unsigned short var_22 = (unsigned short)4815;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
