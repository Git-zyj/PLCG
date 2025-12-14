#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2288889926U;
long long int var_3 = 2249646554669465995LL;
signed char var_4 = (signed char)45;
unsigned short var_5 = (unsigned short)3486;
signed char var_6 = (signed char)-10;
long long int var_7 = 9163971785002510854LL;
unsigned long long int var_11 = 9203860114046051724ULL;
int zero = 0;
unsigned int var_13 = 4226360316U;
unsigned char var_14 = (unsigned char)194;
unsigned short var_15 = (unsigned short)56463;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
