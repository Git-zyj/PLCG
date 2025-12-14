#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned long long int var_5 = 9005018927904400406ULL;
unsigned int var_6 = 3870505619U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-56;
short var_10 = (short)-28101;
int zero = 0;
short var_11 = (short)-12429;
signed char var_12 = (signed char)-116;
unsigned char var_13 = (unsigned char)18;
long long int var_14 = 8477734482955621932LL;
unsigned char var_15 = (unsigned char)140;
unsigned int var_16 = 2470540674U;
unsigned long long int var_17 = 173310784524802514ULL;
short var_18 = (short)-26512;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
