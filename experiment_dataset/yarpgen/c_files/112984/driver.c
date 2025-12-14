#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)66;
short var_6 = (short)27082;
unsigned int var_7 = 1727494210U;
long long int var_9 = -2143947113339121374LL;
signed char var_11 = (signed char)-114;
unsigned int var_13 = 765701446U;
unsigned long long int var_14 = 2420313701826504895ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
short var_20 = (short)6980;
unsigned short var_21 = (unsigned short)24733;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
