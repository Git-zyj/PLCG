#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned short var_4 = (unsigned short)65514;
unsigned short var_6 = (unsigned short)46520;
unsigned char var_7 = (unsigned char)218;
unsigned char var_10 = (unsigned char)235;
signed char var_11 = (signed char)123;
int zero = 0;
unsigned short var_13 = (unsigned short)19637;
int var_14 = 864187741;
long long int var_15 = -8207165229833169124LL;
unsigned char var_16 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
