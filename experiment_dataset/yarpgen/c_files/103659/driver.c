#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 995837206147683357ULL;
unsigned short var_5 = (unsigned short)28288;
int var_7 = 1602610067;
int zero = 0;
int var_14 = -1610089849;
unsigned char var_15 = (unsigned char)94;
signed char var_16 = (signed char)-33;
void init() {
}

void checksum() {
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
