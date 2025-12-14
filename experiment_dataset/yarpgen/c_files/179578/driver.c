#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13745055339005534932ULL;
unsigned char var_1 = (unsigned char)91;
unsigned short var_5 = (unsigned short)33726;
unsigned int var_6 = 323277901U;
unsigned int var_7 = 3810350673U;
unsigned char var_8 = (unsigned char)216;
int zero = 0;
unsigned int var_10 = 68928465U;
unsigned short var_11 = (unsigned short)22706;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-21875;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
