#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17349;
unsigned char var_3 = (unsigned char)112;
long long int var_9 = 3711578189025472622LL;
unsigned short var_10 = (unsigned short)46529;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14214332020666478868ULL;
unsigned short var_14 = (unsigned short)3313;
unsigned char var_15 = (unsigned char)236;
int zero = 0;
signed char var_16 = (signed char)-63;
unsigned long long int var_17 = 17640946860717801221ULL;
unsigned char var_18 = (unsigned char)216;
unsigned short var_19 = (unsigned short)63364;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
