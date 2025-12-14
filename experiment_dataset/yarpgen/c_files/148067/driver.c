#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned char var_3 = (unsigned char)0;
int var_9 = -560619107;
long long int var_11 = -6007304621152214613LL;
short var_16 = (short)-31505;
int zero = 0;
short var_18 = (short)19060;
unsigned int var_19 = 3766458713U;
unsigned long long int var_20 = 5966056115194581555ULL;
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
