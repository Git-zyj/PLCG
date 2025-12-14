#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)26;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 7124413909556630167ULL;
int zero = 0;
unsigned long long int var_19 = 2142022848859081286ULL;
unsigned short var_20 = (unsigned short)17078;
signed char var_21 = (signed char)125;
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
