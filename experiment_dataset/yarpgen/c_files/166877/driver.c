#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned short var_2 = (unsigned short)1704;
int var_3 = -1810278425;
unsigned char var_7 = (unsigned char)155;
int var_8 = -347675955;
long long int var_9 = -8326670670268726436LL;
int var_10 = 1127427248;
signed char var_11 = (signed char)-96;
signed char var_16 = (signed char)-85;
int zero = 0;
signed char var_17 = (signed char)-24;
signed char var_18 = (signed char)14;
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
