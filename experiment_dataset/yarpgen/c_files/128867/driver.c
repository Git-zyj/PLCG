#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28978;
unsigned long long int var_9 = 11246333413416078435ULL;
unsigned short var_10 = (unsigned short)57572;
signed char var_11 = (signed char)-100;
signed char var_13 = (signed char)-103;
short var_17 = (short)13783;
int zero = 0;
short var_20 = (short)19597;
unsigned short var_21 = (unsigned short)33052;
short var_22 = (short)24043;
long long int var_23 = 417042627353911071LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
