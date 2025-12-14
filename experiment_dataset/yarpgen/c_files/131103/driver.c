#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6147015976892164418ULL;
unsigned int var_1 = 2201617161U;
unsigned short var_2 = (unsigned short)24188;
unsigned short var_3 = (unsigned short)45304;
short var_4 = (short)-14462;
short var_5 = (short)31027;
unsigned char var_6 = (unsigned char)252;
unsigned char var_9 = (unsigned char)30;
signed char var_10 = (signed char)-127;
unsigned long long int var_15 = 16590199817695679527ULL;
int zero = 0;
unsigned long long int var_17 = 7617909706660043976ULL;
signed char var_18 = (signed char)76;
signed char var_19 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
