#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38039;
unsigned char var_3 = (unsigned char)119;
signed char var_4 = (signed char)-105;
unsigned short var_5 = (unsigned short)10094;
signed char var_7 = (signed char)-62;
signed char var_11 = (signed char)3;
int zero = 0;
unsigned short var_13 = (unsigned short)12982;
unsigned char var_14 = (unsigned char)132;
unsigned int var_15 = 101126649U;
int var_16 = -1361639112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
