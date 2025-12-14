#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15262;
signed char var_6 = (signed char)-32;
int var_7 = -960283129;
short var_10 = (short)22509;
signed char var_11 = (signed char)-125;
short var_16 = (short)19217;
signed char var_17 = (signed char)80;
unsigned short var_18 = (unsigned short)41076;
unsigned int var_19 = 2431879919U;
int zero = 0;
unsigned long long int var_20 = 10483396486060178005ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)6014;
unsigned short var_23 = (unsigned short)42220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
