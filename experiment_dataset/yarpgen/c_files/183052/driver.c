#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
unsigned char var_3 = (unsigned char)126;
signed char var_5 = (signed char)-72;
signed char var_15 = (signed char)-115;
signed char var_17 = (signed char)-25;
int zero = 0;
long long int var_20 = 7064790324697256890LL;
long long int var_21 = -1172190399363419098LL;
long long int var_22 = 3748966132271607530LL;
short var_23 = (short)28151;
unsigned int var_24 = 4193238105U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
