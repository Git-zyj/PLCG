#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7749631599000871477ULL;
int var_8 = 448038320;
unsigned int var_9 = 3330876296U;
int var_12 = 1103271344;
long long int var_16 = -1998440042367457793LL;
unsigned int var_17 = 4230027531U;
unsigned long long int var_18 = 7957118972830208861ULL;
int zero = 0;
int var_19 = 346113014;
signed char var_20 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
