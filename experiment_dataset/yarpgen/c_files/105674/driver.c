#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12412899913701243076ULL;
unsigned long long int var_3 = 18080522601288199595ULL;
unsigned char var_4 = (unsigned char)74;
unsigned short var_5 = (unsigned short)22635;
int var_6 = -1145223758;
unsigned int var_8 = 2145255918U;
unsigned int var_9 = 465620978U;
unsigned char var_10 = (unsigned char)180;
int zero = 0;
unsigned long long int var_13 = 16448962768723227308ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)3049;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
