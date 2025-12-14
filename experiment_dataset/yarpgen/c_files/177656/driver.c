#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-9572;
int var_9 = -1136112020;
long long int var_14 = -1539665074387399276LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 333212615U;
signed char var_18 = (signed char)28;
int var_19 = 972948705;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
