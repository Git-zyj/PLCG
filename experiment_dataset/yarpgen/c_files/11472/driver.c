#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3095705291U;
unsigned short var_6 = (unsigned short)6310;
unsigned short var_8 = (unsigned short)42867;
int var_12 = -1180092737;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
int var_15 = 1919701173;
int var_16 = -868203184;
unsigned int var_17 = 3555151950U;
int var_18 = 427290713;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
