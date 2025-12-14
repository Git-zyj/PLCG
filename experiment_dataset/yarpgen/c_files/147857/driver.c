#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
unsigned short var_4 = (unsigned short)54219;
unsigned char var_6 = (unsigned char)205;
unsigned long long int var_9 = 21881329572688217ULL;
int var_13 = -1737347874;
int zero = 0;
unsigned long long int var_17 = 1816178721371528040ULL;
signed char var_18 = (signed char)-73;
unsigned short var_19 = (unsigned short)7229;
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
