#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 29564220U;
short var_8 = (short)-20800;
unsigned short var_9 = (unsigned short)59350;
short var_12 = (short)4390;
int var_13 = -1837442295;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
long long int var_18 = 6050379185103923454LL;
unsigned int var_19 = 2942373585U;
long long int var_20 = 6774501425298527045LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
