#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
int var_3 = -1241221957;
signed char var_4 = (signed char)-56;
signed char var_6 = (signed char)69;
short var_9 = (short)1027;
long long int var_10 = -8757691552877196808LL;
int zero = 0;
int var_11 = -514438220;
long long int var_12 = -2597825107684459045LL;
signed char var_13 = (signed char)-49;
unsigned short var_14 = (unsigned short)48205;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
