#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23522;
long long int var_1 = -2322744999699675474LL;
unsigned char var_2 = (unsigned char)178;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3987637642828769667ULL;
unsigned short var_5 = (unsigned short)2572;
signed char var_6 = (signed char)27;
short var_8 = (short)18561;
unsigned int var_9 = 874022945U;
int zero = 0;
long long int var_13 = 7078263886902576265LL;
unsigned short var_14 = (unsigned short)25816;
unsigned int var_15 = 1983542358U;
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
