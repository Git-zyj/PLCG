#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8158568393724365530LL;
unsigned short var_2 = (unsigned short)46678;
short var_5 = (short)7677;
unsigned int var_6 = 50295144U;
unsigned char var_7 = (unsigned char)52;
long long int var_9 = 2407103303050611004LL;
int zero = 0;
unsigned char var_12 = (unsigned char)149;
unsigned int var_13 = 3857487548U;
unsigned long long int var_14 = 15694844453586487137ULL;
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
