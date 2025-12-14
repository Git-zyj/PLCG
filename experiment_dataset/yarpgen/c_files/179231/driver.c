#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21962;
unsigned int var_3 = 700649436U;
unsigned int var_7 = 1487767226U;
int var_8 = -1148738084;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
signed char var_15 = (signed char)83;
long long int var_16 = -8038037319195300506LL;
long long int var_17 = 1926764562245533795LL;
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
