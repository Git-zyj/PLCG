#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1257036307U;
unsigned char var_3 = (unsigned char)134;
unsigned int var_4 = 3249534930U;
signed char var_5 = (signed char)-71;
int var_10 = 1402529422;
signed char var_15 = (signed char)25;
unsigned short var_17 = (unsigned short)123;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned char var_19 = (unsigned char)0;
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
