#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)236;
int var_10 = 1691040408;
long long int var_11 = -5182489733648025427LL;
signed char var_13 = (signed char)-48;
short var_16 = (short)-4163;
unsigned int var_19 = 3491691252U;
int zero = 0;
short var_20 = (short)15466;
unsigned short var_21 = (unsigned short)47629;
unsigned int var_22 = 317151030U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
