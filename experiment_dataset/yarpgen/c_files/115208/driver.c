#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
unsigned short var_4 = (unsigned short)53756;
int var_6 = -1563842316;
short var_9 = (short)-6208;
int var_10 = -742536862;
unsigned long long int var_11 = 7720629706289032023ULL;
unsigned short var_12 = (unsigned short)62931;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
unsigned char var_15 = (unsigned char)96;
void init() {
}

void checksum() {
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
