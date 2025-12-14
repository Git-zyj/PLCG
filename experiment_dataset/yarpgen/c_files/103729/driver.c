#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1001665497;
int var_4 = 1168175025;
unsigned char var_5 = (unsigned char)39;
unsigned long long int var_7 = 7779361267989335090ULL;
int var_8 = -915496301;
unsigned int var_10 = 3827507040U;
signed char var_13 = (signed char)-64;
int zero = 0;
short var_18 = (short)-3726;
unsigned short var_19 = (unsigned short)54347;
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
