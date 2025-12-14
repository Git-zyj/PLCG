#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1533483313439717529ULL;
unsigned char var_1 = (unsigned char)123;
unsigned long long int var_5 = 9282843306873078016ULL;
unsigned long long int var_6 = 8577916260171387586ULL;
int var_7 = -1721813910;
unsigned long long int var_8 = 1319377397583891779ULL;
unsigned long long int var_9 = 3866910698409732999ULL;
unsigned long long int var_11 = 12422642484706870788ULL;
int zero = 0;
unsigned long long int var_12 = 12272013904623276129ULL;
signed char var_13 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
