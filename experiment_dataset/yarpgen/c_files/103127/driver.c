#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1678404356;
long long int var_4 = 5286485332655473691LL;
unsigned short var_8 = (unsigned short)62113;
int zero = 0;
short var_17 = (short)-24337;
unsigned char var_18 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
