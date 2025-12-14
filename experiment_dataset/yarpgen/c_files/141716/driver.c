#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13111;
unsigned short var_6 = (unsigned short)40064;
unsigned short var_9 = (unsigned short)36695;
long long int var_10 = 5699836075632538669LL;
int zero = 0;
unsigned short var_12 = (unsigned short)51133;
unsigned int var_13 = 1065932649U;
void init() {
}

void checksum() {
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
