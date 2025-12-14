#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 112939428;
unsigned short var_2 = (unsigned short)58061;
unsigned short var_3 = (unsigned short)19700;
signed char var_4 = (signed char)-28;
unsigned char var_5 = (unsigned char)155;
int var_6 = -756071114;
unsigned short var_16 = (unsigned short)43342;
int zero = 0;
unsigned int var_17 = 3595257956U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)8056;
void init() {
}

void checksum() {
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
