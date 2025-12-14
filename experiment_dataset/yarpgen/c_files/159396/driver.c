#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -230407655;
short var_2 = (short)18379;
unsigned short var_3 = (unsigned short)7051;
int var_4 = 106630705;
unsigned int var_6 = 3702590782U;
unsigned long long int var_7 = 16079858909805888583ULL;
int var_11 = -1642519779;
short var_13 = (short)21867;
int zero = 0;
signed char var_15 = (signed char)-102;
unsigned short var_16 = (unsigned short)19289;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
