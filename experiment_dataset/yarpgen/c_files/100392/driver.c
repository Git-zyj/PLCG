#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19215;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 1652137316U;
unsigned int var_8 = 1360198506U;
int var_9 = -916110572;
unsigned short var_11 = (unsigned short)46044;
int zero = 0;
int var_12 = 1721939441;
unsigned short var_13 = (unsigned short)47323;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
