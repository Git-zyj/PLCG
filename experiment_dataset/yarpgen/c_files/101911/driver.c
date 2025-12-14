#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22523;
signed char var_3 = (signed char)121;
short var_4 = (short)26285;
signed char var_12 = (signed char)-115;
int zero = 0;
short var_16 = (short)-8618;
unsigned int var_17 = 3544529505U;
void init() {
}

void checksum() {
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
