#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24728;
unsigned char var_1 = (unsigned char)69;
signed char var_4 = (signed char)-101;
unsigned long long int var_5 = 15370099336408071735ULL;
signed char var_7 = (signed char)40;
unsigned long long int var_9 = 18215338040863117338ULL;
unsigned char var_10 = (unsigned char)97;
long long int var_11 = 1664736388949982986LL;
long long int var_13 = 846644433378433625LL;
unsigned char var_15 = (unsigned char)121;
unsigned short var_16 = (unsigned short)49056;
unsigned short var_17 = (unsigned short)62998;
unsigned short var_18 = (unsigned short)10677;
int zero = 0;
short var_20 = (short)22900;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)34256;
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
