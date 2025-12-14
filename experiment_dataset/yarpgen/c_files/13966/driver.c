#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22392;
unsigned char var_2 = (unsigned char)83;
short var_6 = (short)-9569;
int var_7 = -2106028336;
signed char var_8 = (signed char)-54;
unsigned short var_9 = (unsigned short)26143;
int zero = 0;
short var_10 = (short)437;
unsigned char var_11 = (unsigned char)108;
unsigned int var_12 = 3875280518U;
unsigned char var_13 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
