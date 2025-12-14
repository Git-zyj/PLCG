#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5461391606796716230LL;
unsigned int var_2 = 1375595597U;
short var_3 = (short)9603;
unsigned long long int var_4 = 11597530425927277686ULL;
unsigned long long int var_7 = 16541539429423610873ULL;
unsigned long long int var_8 = 16566823822640379845ULL;
unsigned long long int var_9 = 18109588266138647235ULL;
unsigned int var_10 = 796700464U;
int zero = 0;
unsigned int var_12 = 2776656008U;
unsigned short var_13 = (unsigned short)25883;
short var_14 = (short)-31393;
unsigned int var_15 = 4120297254U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
