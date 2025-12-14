#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2002679907203885397LL;
short var_7 = (short)-32212;
long long int var_10 = -8444812012591680577LL;
signed char var_15 = (signed char)-125;
short var_17 = (short)-30220;
int zero = 0;
int var_18 = 1054710464;
short var_19 = (short)-66;
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
