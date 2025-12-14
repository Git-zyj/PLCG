#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)199;
unsigned short var_12 = (unsigned short)26065;
unsigned short var_14 = (unsigned short)24067;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
unsigned char var_19 = (unsigned char)77;
long long int var_20 = -5329215136686873227LL;
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
