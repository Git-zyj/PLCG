#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8201;
unsigned long long int var_1 = 5052897654088188750ULL;
short var_2 = (short)-4847;
signed char var_3 = (signed char)13;
unsigned short var_4 = (unsigned short)51494;
signed char var_5 = (signed char)33;
unsigned char var_6 = (unsigned char)214;
int var_7 = 100881167;
unsigned short var_9 = (unsigned short)2909;
long long int var_10 = 6965572341894702612LL;
signed char var_11 = (signed char)91;
int zero = 0;
unsigned int var_12 = 2450513248U;
signed char var_13 = (signed char)52;
signed char var_14 = (signed char)47;
signed char var_15 = (signed char)98;
unsigned short var_16 = (unsigned short)27975;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
