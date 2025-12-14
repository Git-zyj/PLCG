#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38796;
unsigned long long int var_3 = 17078647577367776121ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)31344;
unsigned char var_6 = (unsigned char)59;
short var_8 = (short)3116;
unsigned short var_9 = (unsigned short)46895;
int zero = 0;
short var_10 = (short)17142;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
