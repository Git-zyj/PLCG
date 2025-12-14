#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -566074220;
long long int var_3 = 4115520155637662595LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)44204;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -7939686882880015567LL;
unsigned short var_11 = (unsigned short)13208;
long long int var_12 = 7971987943653856243LL;
short var_13 = (short)-29968;
long long int var_14 = 6107280200949940588LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
