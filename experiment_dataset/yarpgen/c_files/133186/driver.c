#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 323748408;
unsigned short var_3 = (unsigned short)25376;
unsigned long long int var_4 = 3936915988908606812ULL;
unsigned short var_5 = (unsigned short)35147;
unsigned short var_10 = (unsigned short)50169;
int zero = 0;
signed char var_11 = (signed char)-119;
unsigned short var_12 = (unsigned short)6248;
unsigned short var_13 = (unsigned short)5409;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
