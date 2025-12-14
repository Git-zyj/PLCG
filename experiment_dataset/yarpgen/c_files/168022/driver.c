#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)81;
signed char var_9 = (signed char)115;
unsigned char var_11 = (unsigned char)114;
unsigned char var_13 = (unsigned char)94;
unsigned char var_17 = (unsigned char)202;
unsigned int var_18 = 2751887538U;
int zero = 0;
unsigned char var_19 = (unsigned char)239;
unsigned char var_20 = (unsigned char)31;
unsigned char var_21 = (unsigned char)0;
unsigned int var_22 = 3372371024U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
