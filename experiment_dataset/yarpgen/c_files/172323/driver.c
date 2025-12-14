#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -879267894;
int var_4 = 1589333465;
signed char var_7 = (signed char)117;
int var_9 = -398127084;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
short var_14 = (short)24520;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
