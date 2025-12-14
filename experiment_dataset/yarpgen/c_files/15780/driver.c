#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8039041560021586910LL;
unsigned short var_3 = (unsigned short)33792;
unsigned char var_8 = (unsigned char)255;
unsigned long long int var_14 = 12425646493226968725ULL;
signed char var_16 = (signed char)91;
unsigned long long int var_17 = 16176597824939356810ULL;
unsigned char var_19 = (unsigned char)59;
int zero = 0;
unsigned long long int var_20 = 10194418769442746462ULL;
short var_21 = (short)2365;
void init() {
}

void checksum() {
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
