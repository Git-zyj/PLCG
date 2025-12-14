#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)914;
unsigned long long int var_3 = 7634193552963734535ULL;
long long int var_15 = 3159021438734541834LL;
int var_17 = -1913342437;
unsigned int var_18 = 3930375459U;
int zero = 0;
signed char var_20 = (signed char)120;
unsigned int var_21 = 621884524U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
