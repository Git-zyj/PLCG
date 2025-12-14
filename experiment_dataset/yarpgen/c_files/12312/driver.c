#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23049;
short var_5 = (short)2939;
long long int var_6 = 3373065078293825963LL;
short var_7 = (short)6500;
short var_13 = (short)31500;
unsigned long long int var_16 = 7217326738578966349ULL;
int zero = 0;
int var_18 = 1091879973;
unsigned char var_19 = (unsigned char)180;
signed char var_20 = (signed char)-95;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
