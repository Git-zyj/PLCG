#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8744099260514449612LL;
short var_8 = (short)3730;
unsigned short var_18 = (unsigned short)12518;
int zero = 0;
long long int var_20 = -8414508672639766480LL;
unsigned int var_21 = 400376941U;
int var_22 = -981851251;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
