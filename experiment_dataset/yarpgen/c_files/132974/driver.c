#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4594058638220632868LL;
int var_2 = -978073610;
int var_3 = 1258783541;
unsigned int var_5 = 1734951504U;
long long int var_7 = 825025129126012676LL;
int var_17 = 555644951;
int zero = 0;
signed char var_19 = (signed char)-53;
long long int var_20 = 7196002541900653152LL;
void init() {
}

void checksum() {
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
