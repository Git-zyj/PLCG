#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
signed char var_6 = (signed char)73;
short var_7 = (short)22321;
int var_12 = 1867495823;
int zero = 0;
unsigned long long int var_15 = 6888028693878027907ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11805988947073857340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
