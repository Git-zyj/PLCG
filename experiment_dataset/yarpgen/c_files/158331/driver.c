#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
unsigned char var_5 = (unsigned char)107;
unsigned long long int var_6 = 266065393685683223ULL;
short var_9 = (short)26606;
int zero = 0;
unsigned short var_17 = (unsigned short)570;
signed char var_18 = (signed char)54;
signed char var_19 = (signed char)-66;
signed char var_20 = (signed char)-49;
short var_21 = (short)-9913;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
