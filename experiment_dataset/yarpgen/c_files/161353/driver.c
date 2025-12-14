#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
signed char var_6 = (signed char)-10;
int var_7 = -1646102185;
unsigned char var_8 = (unsigned char)244;
signed char var_12 = (signed char)60;
int zero = 0;
signed char var_13 = (signed char)28;
unsigned int var_14 = 2895056123U;
unsigned long long int var_15 = 14684347303920232268ULL;
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
