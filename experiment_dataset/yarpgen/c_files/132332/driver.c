#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1822281561;
long long int var_3 = -309307909034365722LL;
unsigned int var_7 = 899281501U;
unsigned int var_8 = 134992962U;
unsigned int var_9 = 2822219099U;
int zero = 0;
unsigned short var_20 = (unsigned short)2382;
unsigned short var_21 = (unsigned short)44490;
unsigned long long int var_22 = 243203436096939969ULL;
signed char var_23 = (signed char)-23;
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
