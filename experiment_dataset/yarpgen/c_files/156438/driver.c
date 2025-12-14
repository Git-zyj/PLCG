#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)116;
unsigned long long int var_2 = 6493367003989440678ULL;
int var_4 = 2000131714;
long long int var_7 = -5284991910743706051LL;
int var_8 = -1079776370;
unsigned char var_9 = (unsigned char)199;
int zero = 0;
unsigned int var_12 = 378699251U;
unsigned short var_13 = (unsigned short)55908;
signed char var_14 = (signed char)-17;
signed char var_15 = (signed char)119;
void init() {
}

void checksum() {
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
