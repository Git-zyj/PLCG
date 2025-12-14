#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned char var_1 = (unsigned char)160;
unsigned char var_2 = (unsigned char)183;
unsigned char var_7 = (unsigned char)67;
short var_9 = (short)6680;
long long int var_10 = 8952240160793944746LL;
unsigned short var_14 = (unsigned short)56719;
int zero = 0;
unsigned short var_16 = (unsigned short)13573;
long long int var_17 = 852990513297539886LL;
unsigned int var_18 = 2434713318U;
signed char var_19 = (signed char)113;
signed char var_20 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
