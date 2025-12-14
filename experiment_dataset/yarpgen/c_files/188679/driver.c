#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18417;
unsigned long long int var_3 = 10275337991386813251ULL;
unsigned short var_4 = (unsigned short)11674;
unsigned char var_5 = (unsigned char)208;
unsigned long long int var_6 = 7287453905429852090ULL;
int zero = 0;
signed char var_10 = (signed char)-11;
long long int var_11 = 8713966084413642004LL;
long long int var_12 = 8687470504216507820LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
