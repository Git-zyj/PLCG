#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
long long int var_2 = 6887967191526752311LL;
unsigned long long int var_4 = 6934654673279067603ULL;
unsigned char var_7 = (unsigned char)74;
unsigned long long int var_10 = 18041574157114147535ULL;
int zero = 0;
signed char var_13 = (signed char)93;
long long int var_14 = -1261451273693230138LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
