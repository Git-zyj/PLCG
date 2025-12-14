#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2194171543U;
unsigned char var_2 = (unsigned char)240;
unsigned char var_3 = (unsigned char)65;
unsigned char var_4 = (unsigned char)214;
unsigned long long int var_10 = 17820602599752786985ULL;
unsigned char var_11 = (unsigned char)151;
short var_12 = (short)16875;
signed char var_14 = (signed char)-40;
signed char var_16 = (signed char)109;
signed char var_17 = (signed char)-107;
int zero = 0;
long long int var_19 = 4466600746864108855LL;
unsigned int var_20 = 1661883816U;
unsigned long long int var_21 = 12434547206475607804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
