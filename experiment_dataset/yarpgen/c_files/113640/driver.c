#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
long long int var_3 = -418049741023198897LL;
short var_4 = (short)-25220;
signed char var_5 = (signed char)55;
unsigned char var_6 = (unsigned char)206;
unsigned short var_7 = (unsigned short)19817;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 811787980U;
int zero = 0;
int var_11 = -1638355408;
signed char var_12 = (signed char)-94;
unsigned int var_13 = 120534496U;
short var_14 = (short)31738;
signed char var_15 = (signed char)46;
void init() {
}

void checksum() {
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
