#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12759;
unsigned char var_2 = (unsigned char)249;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)212;
unsigned short var_8 = (unsigned short)38328;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
