#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16474493924727146931ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-14856;
int zero = 0;
unsigned char var_12 = (unsigned char)114;
unsigned char var_13 = (unsigned char)228;
unsigned long long int var_14 = 4259258908223166891ULL;
void init() {
}

void checksum() {
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
