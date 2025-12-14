#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5411075528272892897LL;
short var_3 = (short)27389;
signed char var_6 = (signed char)114;
unsigned char var_7 = (unsigned char)69;
unsigned short var_8 = (unsigned short)25037;
signed char var_9 = (signed char)67;
short var_10 = (short)22685;
signed char var_11 = (signed char)101;
int zero = 0;
int var_13 = -168686359;
short var_14 = (short)-12909;
unsigned short var_15 = (unsigned short)1794;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
