#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3284014920404100670LL;
short var_4 = (short)-6120;
_Bool var_9 = (_Bool)1;
unsigned long long int var_16 = 618541481441991619ULL;
signed char var_17 = (signed char)-2;
signed char var_19 = (signed char)73;
int zero = 0;
int var_20 = 1592231624;
int var_21 = 2127265703;
signed char var_22 = (signed char)-1;
unsigned short var_23 = (unsigned short)40651;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
