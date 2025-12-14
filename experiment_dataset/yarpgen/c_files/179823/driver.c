#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9219;
signed char var_3 = (signed char)101;
short var_4 = (short)-26779;
long long int var_5 = -5335098505334397556LL;
short var_7 = (short)-4875;
long long int var_9 = 6131862201650968562LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
signed char var_14 = (signed char)105;
void init() {
}

void checksum() {
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
