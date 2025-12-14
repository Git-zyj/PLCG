#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8481110671955782490ULL;
int var_1 = -990912820;
long long int var_2 = -2563149370599598409LL;
unsigned int var_3 = 647497275U;
unsigned long long int var_4 = 3393283990230348875ULL;
short var_8 = (short)-22744;
unsigned long long int var_9 = 13750754834237040259ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)110;
unsigned int var_11 = 621570227U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
