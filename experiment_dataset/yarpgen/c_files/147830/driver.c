#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2792473300191294419ULL;
long long int var_7 = -6868437770212292135LL;
unsigned short var_8 = (unsigned short)25902;
int zero = 0;
unsigned short var_15 = (unsigned short)37330;
short var_16 = (short)12823;
unsigned char var_17 = (unsigned char)87;
unsigned char var_18 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
