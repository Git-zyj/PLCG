#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
unsigned short var_3 = (unsigned short)14557;
signed char var_4 = (signed char)123;
signed char var_8 = (signed char)-23;
unsigned char var_9 = (unsigned char)81;
signed char var_12 = (signed char)-9;
int zero = 0;
unsigned char var_13 = (unsigned char)133;
unsigned long long int var_14 = 5810556381630034576ULL;
unsigned char var_15 = (unsigned char)55;
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
