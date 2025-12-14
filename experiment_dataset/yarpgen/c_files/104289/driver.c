#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 3420024764606034949ULL;
int var_18 = -1619775813;
int zero = 0;
unsigned int var_20 = 694582346U;
signed char var_21 = (signed char)89;
unsigned short var_22 = (unsigned short)13444;
long long int var_23 = 4061099702050545866LL;
long long int var_24 = -7290139510205036802LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
