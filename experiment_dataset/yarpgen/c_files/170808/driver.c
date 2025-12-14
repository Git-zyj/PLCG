#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
_Bool var_4 = (_Bool)1;
int var_5 = 1376766819;
short var_10 = (short)12087;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
long long int var_12 = -6419565538981443416LL;
unsigned short var_13 = (unsigned short)18370;
signed char var_14 = (signed char)-66;
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
