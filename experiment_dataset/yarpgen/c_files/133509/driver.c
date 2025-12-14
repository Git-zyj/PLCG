#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15544551623899947135ULL;
int var_7 = 1145064965;
signed char var_12 = (signed char)-89;
int zero = 0;
unsigned long long int var_17 = 3250598353604046630ULL;
int var_18 = -1587644479;
unsigned char var_19 = (unsigned char)177;
unsigned char var_20 = (unsigned char)182;
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
