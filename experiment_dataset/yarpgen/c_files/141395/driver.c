#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44035;
unsigned char var_2 = (unsigned char)0;
_Bool var_4 = (_Bool)0;
short var_7 = (short)4332;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
unsigned int var_13 = 51943229U;
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
