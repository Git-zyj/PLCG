#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1309985850;
int var_6 = 480548846;
unsigned long long int var_9 = 13635643580556138820ULL;
signed char var_15 = (signed char)1;
signed char var_17 = (signed char)-118;
short var_18 = (short)-6480;
int zero = 0;
unsigned short var_19 = (unsigned short)17739;
int var_20 = 243523560;
void init() {
}

void checksum() {
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
