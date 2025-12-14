#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51310;
unsigned long long int var_5 = 16252091743625791033ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 3980882981418012758ULL;
unsigned char var_11 = (unsigned char)150;
unsigned short var_12 = (unsigned short)8473;
int var_13 = 140388982;
int zero = 0;
short var_14 = (short)-17440;
unsigned char var_15 = (unsigned char)147;
signed char var_16 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
