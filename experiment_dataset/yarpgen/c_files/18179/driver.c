#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2670488078000920352LL;
unsigned char var_2 = (unsigned char)47;
signed char var_4 = (signed char)68;
short var_5 = (short)-18917;
short var_10 = (short)22176;
int zero = 0;
unsigned long long int var_12 = 7348695834900935520ULL;
long long int var_13 = 4727523333621748424LL;
unsigned short var_14 = (unsigned short)45299;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
