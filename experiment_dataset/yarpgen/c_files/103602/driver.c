#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = 8288626589401678598LL;
unsigned int var_12 = 3819235062U;
unsigned char var_13 = (unsigned char)46;
short var_14 = (short)21186;
int zero = 0;
int var_17 = 97461737;
short var_18 = (short)-23995;
short var_19 = (short)-9293;
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
