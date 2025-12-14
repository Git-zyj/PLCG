#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19492;
unsigned int var_5 = 189736374U;
unsigned int var_6 = 3999400871U;
unsigned short var_11 = (unsigned short)27310;
int zero = 0;
unsigned long long int var_16 = 9400452648286257730ULL;
unsigned long long int var_17 = 9727050963474957037ULL;
long long int var_18 = 3144631221770596505LL;
signed char var_19 = (signed char)111;
signed char var_20 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
