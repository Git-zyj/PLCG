#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3593336049994524981LL;
unsigned int var_6 = 351994696U;
unsigned short var_10 = (unsigned short)828;
long long int var_13 = -5237994789576196396LL;
signed char var_14 = (signed char)65;
int zero = 0;
long long int var_17 = -5108760540393149941LL;
unsigned short var_18 = (unsigned short)59555;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
