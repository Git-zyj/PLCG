#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 597690776U;
short var_3 = (short)22732;
int var_7 = -519119263;
unsigned long long int var_10 = 17057677418509241996ULL;
unsigned short var_13 = (unsigned short)8706;
short var_19 = (short)14810;
int zero = 0;
int var_20 = -604731236;
short var_21 = (short)-10576;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
