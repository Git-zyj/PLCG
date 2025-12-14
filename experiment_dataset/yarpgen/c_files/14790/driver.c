#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
unsigned int var_2 = 731121045U;
unsigned char var_4 = (unsigned char)177;
unsigned char var_5 = (unsigned char)155;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)17;
int zero = 0;
unsigned int var_12 = 555386647U;
unsigned char var_13 = (unsigned char)213;
void init() {
}

void checksum() {
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
