#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)136;
unsigned short var_5 = (unsigned short)44185;
unsigned char var_7 = (unsigned char)203;
unsigned short var_8 = (unsigned short)52067;
unsigned long long int var_9 = 10410076544003711185ULL;
int zero = 0;
unsigned long long int var_10 = 9813854728458053471ULL;
unsigned long long int var_11 = 833172366987261421ULL;
unsigned char var_12 = (unsigned char)153;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)19618;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
