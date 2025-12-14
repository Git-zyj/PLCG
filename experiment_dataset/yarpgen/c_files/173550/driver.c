#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3501884746274423364LL;
unsigned int var_8 = 3135099401U;
long long int var_10 = -3092540265706858599LL;
unsigned long long int var_15 = 4624374210835755807ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)50576;
long long int var_17 = -8877206570492575967LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
