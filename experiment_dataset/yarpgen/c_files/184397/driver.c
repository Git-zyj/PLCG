#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1098615677731864970LL;
unsigned long long int var_4 = 13725356313059397444ULL;
long long int var_5 = -2929312273866418392LL;
signed char var_9 = (signed char)73;
unsigned short var_11 = (unsigned short)52972;
int zero = 0;
long long int var_12 = -4023133587350271081LL;
long long int var_13 = -6294853635241549332LL;
unsigned int var_14 = 2990656053U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
