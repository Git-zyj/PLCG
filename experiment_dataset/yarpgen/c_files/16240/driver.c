#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 401462539U;
unsigned short var_1 = (unsigned short)3859;
unsigned int var_2 = 1262733427U;
unsigned int var_4 = 4099692739U;
signed char var_5 = (signed char)-2;
unsigned char var_6 = (unsigned char)92;
signed char var_9 = (signed char)24;
int zero = 0;
unsigned char var_11 = (unsigned char)11;
short var_12 = (short)27140;
unsigned short var_13 = (unsigned short)13112;
void init() {
}

void checksum() {
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
