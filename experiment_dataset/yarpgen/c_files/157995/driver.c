#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 2126122528493864010ULL;
signed char var_17 = (signed char)66;
int zero = 0;
unsigned char var_18 = (unsigned char)118;
signed char var_19 = (signed char)-110;
unsigned short var_20 = (unsigned short)3081;
unsigned short var_21 = (unsigned short)29389;
unsigned short var_22 = (unsigned short)39800;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
