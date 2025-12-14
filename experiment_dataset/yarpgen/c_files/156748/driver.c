#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5135037654154679113LL;
int var_7 = -898008465;
int zero = 0;
unsigned short var_17 = (unsigned short)57835;
int var_18 = -1366969569;
unsigned int var_19 = 1626796836U;
int var_20 = 1884367856;
void init() {
}

void checksum() {
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
