#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51255;
signed char var_6 = (signed char)-25;
signed char var_7 = (signed char)-77;
unsigned short var_9 = (unsigned short)6280;
int var_10 = 1180405418;
int zero = 0;
unsigned int var_13 = 4091631785U;
signed char var_14 = (signed char)31;
unsigned long long int var_15 = 3214931406707169933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
