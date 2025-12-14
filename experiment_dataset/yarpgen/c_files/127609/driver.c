#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65277;
unsigned short var_3 = (unsigned short)64014;
signed char var_4 = (signed char)-89;
unsigned short var_8 = (unsigned short)30144;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)177;
int zero = 0;
unsigned int var_18 = 1542614562U;
unsigned char var_19 = (unsigned char)1;
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
