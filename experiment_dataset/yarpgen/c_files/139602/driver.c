#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)179;
unsigned char var_13 = (unsigned char)59;
int zero = 0;
signed char var_18 = (signed char)-103;
short var_19 = (short)30775;
short var_20 = (short)-22153;
unsigned char var_21 = (unsigned char)208;
unsigned char var_22 = (unsigned char)93;
long long int var_23 = 4478784768638611373LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
