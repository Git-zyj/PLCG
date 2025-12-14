#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
signed char var_7 = (signed char)-29;
unsigned short var_10 = (unsigned short)16940;
int var_13 = 1080621013;
int zero = 0;
unsigned char var_14 = (unsigned char)191;
signed char var_15 = (signed char)-115;
long long int var_16 = -6644830817738343666LL;
short var_17 = (short)-16609;
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
