#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned long long int var_3 = 10715443614512829745ULL;
unsigned short var_7 = (unsigned short)43492;
unsigned short var_8 = (unsigned short)34467;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)111;
unsigned int var_11 = 4204471614U;
int zero = 0;
int var_13 = -1771912550;
unsigned char var_14 = (unsigned char)76;
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
