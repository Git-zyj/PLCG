#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1910755852U;
unsigned char var_4 = (unsigned char)240;
int var_5 = 870575022;
signed char var_8 = (signed char)52;
int zero = 0;
signed char var_18 = (signed char)-101;
unsigned int var_19 = 454802407U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
