#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8971012689486263385ULL;
unsigned char var_3 = (unsigned char)7;
short var_5 = (short)-29826;
unsigned char var_8 = (unsigned char)41;
long long int var_16 = -7717315494110157603LL;
int zero = 0;
int var_18 = -2009590191;
long long int var_19 = 994865874368418270LL;
int var_20 = 1932961347;
void init() {
}

void checksum() {
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
