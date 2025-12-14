#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44848;
int var_1 = -1518411354;
unsigned long long int var_3 = 345277614647190704ULL;
unsigned short var_10 = (unsigned short)14331;
unsigned long long int var_13 = 6714443693487059217ULL;
int var_14 = 1277390419;
unsigned int var_18 = 3799835192U;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned long long int var_20 = 3769890540516591542ULL;
short var_21 = (short)-2934;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
