#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9006280945975601441ULL;
unsigned char var_2 = (unsigned char)218;
short var_3 = (short)-5577;
short var_7 = (short)50;
signed char var_10 = (signed char)-106;
int zero = 0;
unsigned long long int var_11 = 6358838789051994451ULL;
unsigned short var_12 = (unsigned short)61801;
unsigned char var_13 = (unsigned char)40;
short var_14 = (short)-21884;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
