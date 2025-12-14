#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 542964739132090836ULL;
unsigned int var_4 = 2675416643U;
unsigned long long int var_5 = 7693722482245498653ULL;
signed char var_10 = (signed char)-112;
int zero = 0;
unsigned long long int var_17 = 5756439945163637375ULL;
unsigned short var_18 = (unsigned short)41724;
unsigned int var_19 = 2340163500U;
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
