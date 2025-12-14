#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
signed char var_4 = (signed char)64;
unsigned char var_9 = (unsigned char)236;
signed char var_10 = (signed char)-66;
unsigned char var_11 = (unsigned char)202;
short var_12 = (short)20910;
int zero = 0;
signed char var_13 = (signed char)-37;
long long int var_14 = 3295316437046758527LL;
unsigned char var_15 = (unsigned char)232;
void init() {
}

void checksum() {
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
