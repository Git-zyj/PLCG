#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
signed char var_5 = (signed char)120;
short var_11 = (short)31517;
unsigned char var_12 = (unsigned char)27;
int zero = 0;
short var_17 = (short)-9711;
unsigned short var_18 = (unsigned short)14113;
unsigned short var_19 = (unsigned short)21005;
unsigned long long int var_20 = 17750320877411769811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
