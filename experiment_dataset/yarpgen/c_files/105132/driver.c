#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)35443;
unsigned short var_11 = (unsigned short)31369;
signed char var_14 = (signed char)85;
int zero = 0;
unsigned int var_17 = 3312606610U;
int var_18 = -1385751382;
signed char var_19 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
