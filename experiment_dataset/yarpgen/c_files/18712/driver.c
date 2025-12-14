#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned int var_2 = 1117800940U;
short var_4 = (short)24110;
unsigned short var_7 = (unsigned short)54892;
int var_8 = -1324305663;
signed char var_10 = (signed char)91;
unsigned int var_13 = 2668148216U;
signed char var_14 = (signed char)125;
int zero = 0;
unsigned long long int var_15 = 3869290183885419693ULL;
int var_16 = 1276317871;
short var_17 = (short)27669;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
