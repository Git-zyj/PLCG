#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-35;
unsigned short var_7 = (unsigned short)55427;
signed char var_9 = (signed char)81;
long long int var_12 = 7988710640493488176LL;
unsigned long long int var_15 = 16331643131008213108ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)174;
unsigned short var_17 = (unsigned short)52131;
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
