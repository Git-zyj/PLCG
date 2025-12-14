#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 363039152255301614ULL;
unsigned long long int var_2 = 14578556901809681677ULL;
short var_6 = (short)2690;
unsigned short var_8 = (unsigned short)26298;
signed char var_9 = (signed char)7;
int zero = 0;
unsigned long long int var_18 = 7364927852454697667ULL;
unsigned char var_19 = (unsigned char)16;
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
