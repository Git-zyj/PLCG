#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)29218;
unsigned short var_6 = (unsigned short)52277;
unsigned short var_12 = (unsigned short)6893;
unsigned char var_13 = (unsigned char)117;
short var_14 = (short)-1916;
signed char var_15 = (signed char)1;
int zero = 0;
unsigned int var_16 = 960497012U;
unsigned short var_17 = (unsigned short)57680;
long long int var_18 = -8324612116446756856LL;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
