#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1328502789;
unsigned int var_1 = 3207545828U;
unsigned int var_5 = 2915065867U;
long long int var_7 = 30647530409980503LL;
short var_8 = (short)10743;
signed char var_9 = (signed char)-39;
unsigned int var_10 = 2953519897U;
int zero = 0;
int var_11 = 1492529127;
unsigned char var_12 = (unsigned char)125;
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
