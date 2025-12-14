#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5374;
long long int var_12 = 6580859450490601719LL;
short var_13 = (short)-21452;
int zero = 0;
signed char var_14 = (signed char)-29;
unsigned char var_15 = (unsigned char)36;
long long int var_16 = 8611955602753948209LL;
signed char var_17 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
