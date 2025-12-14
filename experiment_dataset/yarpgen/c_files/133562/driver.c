#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)10;
long long int var_5 = -9169626535809801180LL;
signed char var_6 = (signed char)-49;
int var_8 = -883712371;
signed char var_9 = (signed char)-69;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2392338275U;
void init() {
}

void checksum() {
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
