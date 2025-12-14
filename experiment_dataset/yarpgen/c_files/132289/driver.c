#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned short var_5 = (unsigned short)44345;
_Bool var_6 = (_Bool)1;
short var_9 = (short)27900;
int var_14 = -1646994709;
unsigned short var_16 = (unsigned short)29787;
unsigned long long int var_19 = 10827101809621445792ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)81;
unsigned short var_22 = (unsigned short)11293;
short var_23 = (short)-1600;
_Bool var_24 = (_Bool)0;
int var_25 = -1572679873;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
