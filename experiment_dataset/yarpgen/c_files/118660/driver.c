#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11839643632182951636ULL;
int var_3 = -1844534753;
unsigned int var_11 = 89041739U;
long long int var_15 = 7787976372072143499LL;
unsigned short var_17 = (unsigned short)25282;
int zero = 0;
unsigned long long int var_18 = 6237285549410551054ULL;
short var_19 = (short)-25963;
void init() {
}

void checksum() {
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
