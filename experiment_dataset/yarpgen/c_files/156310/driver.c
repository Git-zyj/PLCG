#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25765;
long long int var_2 = 885108689195831504LL;
unsigned int var_4 = 454638238U;
unsigned char var_7 = (unsigned char)14;
signed char var_8 = (signed char)8;
int var_9 = -272188024;
long long int var_10 = -8829836819754360078LL;
unsigned short var_15 = (unsigned short)47809;
long long int var_16 = 5894298905502938995LL;
int zero = 0;
signed char var_18 = (signed char)74;
long long int var_19 = -592038519337763769LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
