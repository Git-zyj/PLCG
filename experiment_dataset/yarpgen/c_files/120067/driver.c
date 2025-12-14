#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1847228880U;
signed char var_6 = (signed char)42;
unsigned char var_7 = (unsigned char)114;
unsigned short var_8 = (unsigned short)42010;
short var_9 = (short)-31843;
signed char var_12 = (signed char)-118;
int zero = 0;
long long int var_14 = 5512464308745327520LL;
unsigned int var_15 = 2150810627U;
unsigned short var_16 = (unsigned short)40034;
unsigned short var_17 = (unsigned short)34129;
void init() {
}

void checksum() {
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
