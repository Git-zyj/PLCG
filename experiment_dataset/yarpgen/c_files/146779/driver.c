#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12384905560355509380ULL;
unsigned short var_1 = (unsigned short)54913;
unsigned short var_2 = (unsigned short)28206;
unsigned long long int var_3 = 3933317184550041005ULL;
unsigned int var_5 = 3622897072U;
unsigned char var_6 = (unsigned char)125;
signed char var_8 = (signed char)-40;
unsigned char var_10 = (unsigned char)167;
int zero = 0;
short var_11 = (short)-25666;
unsigned char var_12 = (unsigned char)41;
void init() {
}

void checksum() {
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
