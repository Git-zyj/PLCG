#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -969660184569233479LL;
signed char var_4 = (signed char)19;
short var_6 = (short)22311;
unsigned char var_9 = (unsigned char)196;
unsigned char var_10 = (unsigned char)113;
unsigned int var_15 = 134115008U;
int zero = 0;
long long int var_17 = 8938683338825958751LL;
signed char var_18 = (signed char)82;
int var_19 = 2067596933;
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
