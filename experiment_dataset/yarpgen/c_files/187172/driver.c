#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1891996965;
unsigned int var_5 = 3240890462U;
signed char var_6 = (signed char)-9;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_18 = (short)8386;
signed char var_19 = (signed char)-51;
long long int var_20 = -7602295177495144635LL;
unsigned char var_21 = (unsigned char)105;
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
