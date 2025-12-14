#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
unsigned short var_1 = (unsigned short)22240;
signed char var_3 = (signed char)126;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-38;
short var_8 = (short)-4401;
unsigned char var_10 = (unsigned char)186;
int zero = 0;
unsigned char var_12 = (unsigned char)188;
unsigned short var_13 = (unsigned short)26862;
unsigned char var_14 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
