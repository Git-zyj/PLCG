#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18726;
long long int var_1 = 1166587364621085926LL;
short var_5 = (short)-11124;
unsigned short var_8 = (unsigned short)55833;
unsigned long long int var_9 = 4655588996803829716ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
unsigned char var_15 = (unsigned char)56;
_Bool var_16 = (_Bool)1;
int var_17 = 86942031;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
