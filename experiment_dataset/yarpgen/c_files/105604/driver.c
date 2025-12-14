#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 542347150652514844LL;
int var_5 = 1108278462;
long long int var_6 = 2738626952656149717LL;
short var_8 = (short)18206;
int var_9 = 1090743194;
long long int var_11 = 7481394153173204173LL;
signed char var_14 = (signed char)94;
unsigned short var_16 = (unsigned short)27114;
int zero = 0;
signed char var_17 = (signed char)-33;
unsigned char var_18 = (unsigned char)193;
unsigned short var_19 = (unsigned short)20877;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
