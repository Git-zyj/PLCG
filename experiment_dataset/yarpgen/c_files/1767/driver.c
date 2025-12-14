#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1200603130487849407ULL;
unsigned short var_5 = (unsigned short)27917;
unsigned char var_14 = (unsigned char)240;
unsigned long long int var_19 = 5326757350233079024ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-50;
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
