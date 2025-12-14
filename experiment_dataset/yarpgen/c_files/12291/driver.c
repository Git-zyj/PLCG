#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 295856798U;
signed char var_3 = (signed char)-124;
_Bool var_4 = (_Bool)0;
long long int var_7 = -6948991274295612332LL;
short var_8 = (short)27619;
unsigned char var_9 = (unsigned char)133;
long long int var_11 = -8549310292324472974LL;
signed char var_12 = (signed char)110;
int zero = 0;
long long int var_13 = 4647158441377493569LL;
unsigned int var_14 = 3389366372U;
unsigned short var_15 = (unsigned short)17142;
void init() {
}

void checksum() {
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
