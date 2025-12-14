#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1263057668U;
unsigned int var_3 = 2049272739U;
long long int var_4 = -5384008298503277428LL;
signed char var_5 = (signed char)113;
signed char var_6 = (signed char)-50;
signed char var_7 = (signed char)-125;
long long int var_8 = -7005814398860122222LL;
unsigned long long int var_9 = 10687850601981260415ULL;
int zero = 0;
signed char var_10 = (signed char)-74;
unsigned char var_11 = (unsigned char)19;
unsigned short var_12 = (unsigned short)24154;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
