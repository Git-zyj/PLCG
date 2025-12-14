#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1893707101U;
int var_6 = -307397370;
int var_7 = 361837935;
signed char var_8 = (signed char)-18;
unsigned char var_9 = (unsigned char)110;
int zero = 0;
long long int var_13 = 573386590710237555LL;
unsigned int var_14 = 1993363570U;
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
