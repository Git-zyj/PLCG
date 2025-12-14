#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)550;
unsigned long long int var_8 = 9148577069146528874ULL;
unsigned short var_13 = (unsigned short)14102;
int zero = 0;
unsigned short var_20 = (unsigned short)47005;
unsigned char var_21 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
