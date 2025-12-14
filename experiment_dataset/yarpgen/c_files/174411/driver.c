#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1072580129U;
long long int var_3 = 2735413272911379682LL;
signed char var_4 = (signed char)116;
unsigned char var_5 = (unsigned char)62;
signed char var_10 = (signed char)-17;
unsigned int var_11 = 2868817384U;
int zero = 0;
int var_13 = 861163458;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)47120;
int var_16 = 517009251;
unsigned char var_17 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
