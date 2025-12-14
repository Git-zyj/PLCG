#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
long long int var_1 = 6269216010931233912LL;
signed char var_3 = (signed char)6;
signed char var_4 = (signed char)-71;
unsigned int var_8 = 2408458144U;
unsigned long long int var_12 = 7370159430407848766ULL;
long long int var_13 = 7388795690126303086LL;
int zero = 0;
unsigned short var_16 = (unsigned short)50133;
long long int var_17 = -2376457096989725595LL;
unsigned long long int var_18 = 9635253716449885207ULL;
long long int var_19 = 2094950483647247548LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
