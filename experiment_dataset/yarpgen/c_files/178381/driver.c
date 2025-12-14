#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned char var_3 = (unsigned char)206;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)203;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 4108255629448860911ULL;
unsigned long long int var_11 = 16731227093830685981ULL;
short var_12 = (short)-29363;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
