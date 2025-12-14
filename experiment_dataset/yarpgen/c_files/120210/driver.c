#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1104475037U;
unsigned short var_1 = (unsigned short)3692;
signed char var_2 = (signed char)-14;
signed char var_3 = (signed char)77;
signed char var_5 = (signed char)21;
int var_7 = 1238657768;
signed char var_11 = (signed char)-73;
int zero = 0;
signed char var_12 = (signed char)68;
signed char var_13 = (signed char)104;
signed char var_14 = (signed char)-92;
long long int var_15 = -7526846391720944743LL;
long long int var_16 = -4199633592835164769LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
