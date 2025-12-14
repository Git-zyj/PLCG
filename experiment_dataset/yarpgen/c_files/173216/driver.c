#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5048344453309783673LL;
unsigned long long int var_5 = 4870450622719903497ULL;
int var_12 = 351987759;
int zero = 0;
unsigned short var_18 = (unsigned short)65468;
unsigned char var_19 = (unsigned char)61;
unsigned short var_20 = (unsigned short)6606;
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
