#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)115;
signed char var_5 = (signed char)-95;
unsigned long long int var_7 = 2945531452014432294ULL;
long long int var_8 = 778896053921240991LL;
signed char var_9 = (signed char)(-127 - 1);
unsigned char var_10 = (unsigned char)130;
unsigned short var_11 = (unsigned short)37016;
int var_15 = 818293424;
int zero = 0;
unsigned long long int var_17 = 11067487285293690005ULL;
unsigned long long int var_18 = 17976986140533908586ULL;
unsigned char var_19 = (unsigned char)142;
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
