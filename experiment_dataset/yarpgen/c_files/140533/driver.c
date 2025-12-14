#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15313900506713368398ULL;
unsigned long long int var_14 = 8998420275251660936ULL;
int zero = 0;
unsigned long long int var_16 = 6415889230145576266ULL;
short var_17 = (short)27056;
unsigned long long int var_18 = 14227784605711838978ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
