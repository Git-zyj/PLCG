#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10611988607016865631ULL;
signed char var_5 = (signed char)-102;
int var_6 = -1958963139;
unsigned int var_9 = 1094855000U;
signed char var_11 = (signed char)30;
unsigned char var_12 = (unsigned char)105;
int var_15 = -1160335131;
int zero = 0;
signed char var_17 = (signed char)-124;
unsigned short var_18 = (unsigned short)113;
unsigned char var_19 = (unsigned char)147;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
