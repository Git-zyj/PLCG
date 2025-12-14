#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 10163599635703089269ULL;
short var_9 = (short)-7926;
unsigned char var_10 = (unsigned char)12;
unsigned long long int var_11 = 15160655833936747255ULL;
int zero = 0;
unsigned long long int var_12 = 8106694070203415273ULL;
unsigned char var_13 = (unsigned char)254;
unsigned int var_14 = 4288328669U;
void init() {
}

void checksum() {
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
