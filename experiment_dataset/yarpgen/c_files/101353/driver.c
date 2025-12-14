#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10139767427379557349ULL;
short var_1 = (short)-28376;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-27198;
int var_5 = 190757419;
signed char var_9 = (signed char)69;
int zero = 0;
unsigned short var_11 = (unsigned short)47272;
signed char var_12 = (signed char)43;
unsigned char var_13 = (unsigned char)202;
signed char var_14 = (signed char)43;
short var_15 = (short)19195;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
