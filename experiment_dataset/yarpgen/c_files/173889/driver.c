#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4119783024235934247LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 201686191U;
long long int var_3 = 4503608817417905300LL;
unsigned short var_5 = (unsigned short)54469;
unsigned char var_8 = (unsigned char)229;
long long int var_9 = -6574624214136608095LL;
int zero = 0;
signed char var_10 = (signed char)28;
_Bool var_11 = (_Bool)0;
long long int var_12 = -9014253676508487494LL;
int var_13 = -673637679;
short var_14 = (short)-6876;
unsigned int var_15 = 3144041535U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
