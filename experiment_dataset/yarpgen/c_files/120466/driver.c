#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)44;
signed char var_5 = (signed char)32;
signed char var_12 = (signed char)-10;
unsigned char var_14 = (unsigned char)172;
int zero = 0;
signed char var_15 = (signed char)41;
unsigned char var_16 = (unsigned char)223;
short var_17 = (short)-30266;
unsigned long long int var_18 = 17857216095844337877ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
