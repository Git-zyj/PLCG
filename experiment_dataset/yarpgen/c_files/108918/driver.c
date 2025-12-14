#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1915013512U;
unsigned char var_2 = (unsigned char)89;
unsigned char var_4 = (unsigned char)143;
short var_5 = (short)27421;
long long int var_8 = 2868047250947179603LL;
unsigned int var_9 = 3101820197U;
int zero = 0;
long long int var_11 = 9014573117289352443LL;
long long int var_12 = -2260318167272449286LL;
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
