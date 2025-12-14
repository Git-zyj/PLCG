#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned char var_2 = (unsigned char)228;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)39;
signed char var_7 = (signed char)-33;
long long int var_8 = -681807133322315409LL;
unsigned long long int var_9 = 15703003189416848336ULL;
int zero = 0;
short var_11 = (short)-12221;
unsigned long long int var_12 = 15676067860899378312ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
