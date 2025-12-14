#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9936;
unsigned char var_3 = (unsigned char)102;
unsigned short var_8 = (unsigned short)3649;
unsigned long long int var_9 = 8749798337894879933ULL;
int zero = 0;
short var_12 = (short)29787;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)189;
long long int var_15 = 1270794423935959458LL;
unsigned short var_16 = (unsigned short)41142;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
