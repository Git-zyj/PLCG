#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned int var_3 = 1988334201U;
int var_4 = 1729211045;
long long int var_7 = -1593007297494531449LL;
unsigned int var_12 = 1712793646U;
int zero = 0;
signed char var_18 = (signed char)10;
unsigned int var_19 = 3822133318U;
unsigned int var_20 = 2146559284U;
void init() {
}

void checksum() {
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
