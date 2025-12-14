#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3224331659U;
unsigned char var_2 = (unsigned char)188;
unsigned char var_3 = (unsigned char)209;
unsigned int var_8 = 899642891U;
unsigned short var_9 = (unsigned short)56209;
long long int var_11 = -5155280286916901295LL;
unsigned int var_12 = 2449950341U;
unsigned long long int var_14 = 869759102097366674ULL;
int zero = 0;
int var_15 = 864722069;
unsigned char var_16 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
