#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3857558636288349671LL;
unsigned int var_10 = 3382074666U;
int zero = 0;
unsigned int var_15 = 2416017472U;
unsigned short var_16 = (unsigned short)2967;
long long int var_17 = -3686488656130884146LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
