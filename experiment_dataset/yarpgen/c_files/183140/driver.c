#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned long long int var_2 = 6273354699393001953ULL;
unsigned short var_5 = (unsigned short)50700;
signed char var_17 = (signed char)17;
int zero = 0;
short var_20 = (short)10858;
unsigned char var_21 = (unsigned char)121;
short var_22 = (short)13689;
unsigned int var_23 = 2331084070U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
