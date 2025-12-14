#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)139;
signed char var_3 = (signed char)56;
unsigned int var_5 = 1104448776U;
unsigned short var_6 = (unsigned short)32323;
unsigned long long int var_9 = 2317461977588406521ULL;
unsigned int var_12 = 3301992102U;
int zero = 0;
long long int var_14 = 548292320166953442LL;
unsigned long long int var_15 = 6195555780481607357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
