#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
signed char var_4 = (signed char)-46;
short var_7 = (short)6396;
short var_8 = (short)25991;
long long int var_9 = 5640083950907958909LL;
short var_10 = (short)28339;
int zero = 0;
unsigned short var_14 = (unsigned short)14944;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)25911;
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
