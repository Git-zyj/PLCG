#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8118820727421877029ULL;
int var_5 = 519897165;
signed char var_6 = (signed char)49;
signed char var_8 = (signed char)97;
unsigned short var_10 = (unsigned short)64994;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)20770;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
short var_15 = (short)-19794;
unsigned char var_16 = (unsigned char)164;
int var_17 = -1524935072;
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
