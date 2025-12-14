#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29911;
unsigned long long int var_6 = 10513985784037805534ULL;
unsigned char var_7 = (unsigned char)95;
long long int var_8 = -4177035219905761994LL;
unsigned long long int var_10 = 14114316960424830060ULL;
signed char var_11 = (signed char)86;
unsigned int var_12 = 1383323856U;
int var_14 = -293586086;
int zero = 0;
signed char var_18 = (signed char)54;
short var_19 = (short)10708;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
