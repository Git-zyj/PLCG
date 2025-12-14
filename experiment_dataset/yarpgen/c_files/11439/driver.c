#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 82966790U;
int var_9 = -420773060;
unsigned char var_12 = (unsigned char)27;
short var_14 = (short)4168;
_Bool var_15 = (_Bool)0;
int var_16 = 1005383191;
int zero = 0;
unsigned short var_18 = (unsigned short)4635;
short var_19 = (short)-2068;
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
