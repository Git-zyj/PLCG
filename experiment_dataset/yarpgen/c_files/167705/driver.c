#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50953;
int var_5 = -2065296036;
unsigned int var_6 = 993272251U;
long long int var_7 = 6193989921247463611LL;
unsigned short var_9 = (unsigned short)37945;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
