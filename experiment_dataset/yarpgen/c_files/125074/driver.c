#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)19770;
int var_5 = -1751822511;
long long int var_6 = -8261024527684812610LL;
unsigned int var_8 = 2123399546U;
signed char var_12 = (signed char)123;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1055450273;
unsigned int var_19 = 199276651U;
int var_20 = -1002728751;
unsigned short var_21 = (unsigned short)49039;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
