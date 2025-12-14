#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6502001006350295500LL;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3230270865U;
unsigned char var_5 = (unsigned char)216;
unsigned int var_9 = 3525064870U;
signed char var_10 = (signed char)13;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 3252496254246834872ULL;
unsigned short var_14 = (unsigned short)29717;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16077976978034092603ULL;
long long int var_18 = -4472727392641706843LL;
void init() {
}

void checksum() {
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
