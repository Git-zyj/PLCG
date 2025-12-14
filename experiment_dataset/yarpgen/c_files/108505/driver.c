#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25585;
_Bool var_2 = (_Bool)0;
int var_4 = -669379357;
short var_5 = (short)12241;
unsigned char var_6 = (unsigned char)138;
unsigned short var_13 = (unsigned short)9164;
int zero = 0;
unsigned short var_20 = (unsigned short)54131;
int var_21 = 1753039282;
unsigned char var_22 = (unsigned char)206;
void init() {
}

void checksum() {
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
