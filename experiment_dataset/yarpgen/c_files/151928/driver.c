#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_11 = (signed char)70;
unsigned long long int var_12 = 12584406264961102635ULL;
signed char var_15 = (signed char)-78;
unsigned char var_17 = (unsigned char)34;
int zero = 0;
unsigned long long int var_19 = 14734979499322498150ULL;
unsigned char var_20 = (unsigned char)209;
unsigned long long int var_21 = 6004857049840402965ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
