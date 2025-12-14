#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
unsigned long long int var_5 = 6812314359017505387ULL;
unsigned char var_6 = (unsigned char)219;
int var_8 = -769793907;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 632889253;
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
