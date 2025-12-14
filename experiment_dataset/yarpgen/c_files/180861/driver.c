#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2029694483U;
short var_4 = (short)-16888;
signed char var_9 = (signed char)57;
short var_10 = (short)-1760;
unsigned long long int var_11 = 11531437545390358924ULL;
int var_16 = -247788443;
signed char var_18 = (signed char)-76;
int zero = 0;
long long int var_19 = -2489912489512682435LL;
int var_20 = 46797709;
unsigned char var_21 = (unsigned char)89;
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
