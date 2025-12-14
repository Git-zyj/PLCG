#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15056;
signed char var_2 = (signed char)-108;
long long int var_4 = -778091994465014043LL;
unsigned short var_8 = (unsigned short)63164;
short var_12 = (short)31635;
unsigned long long int var_14 = 6542669050385024848ULL;
int var_17 = -748943860;
int zero = 0;
unsigned short var_18 = (unsigned short)22386;
long long int var_19 = 6014351713649948392LL;
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
