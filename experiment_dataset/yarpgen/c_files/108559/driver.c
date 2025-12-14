#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
signed char var_2 = (signed char)-28;
unsigned char var_5 = (unsigned char)185;
unsigned char var_6 = (unsigned char)107;
unsigned char var_14 = (unsigned char)26;
int zero = 0;
short var_18 = (short)-4352;
long long int var_19 = 1745075735089194004LL;
unsigned short var_20 = (unsigned short)59464;
unsigned char var_21 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
