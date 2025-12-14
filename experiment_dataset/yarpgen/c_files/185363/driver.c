#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)120;
unsigned short var_12 = (unsigned short)54014;
unsigned short var_16 = (unsigned short)56248;
int zero = 0;
long long int var_19 = 489101397320142513LL;
unsigned long long int var_20 = 14939348323743277472ULL;
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
