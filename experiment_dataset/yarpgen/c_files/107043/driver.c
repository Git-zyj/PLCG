#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33064;
unsigned short var_4 = (unsigned short)38037;
unsigned short var_9 = (unsigned short)6680;
unsigned short var_10 = (unsigned short)58540;
int zero = 0;
unsigned long long int var_11 = 3578426893472550832ULL;
unsigned short var_12 = (unsigned short)40097;
unsigned char var_13 = (unsigned char)115;
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
