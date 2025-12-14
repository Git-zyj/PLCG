#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_4 = (signed char)64;
signed char var_5 = (signed char)86;
unsigned char var_7 = (unsigned char)236;
signed char var_9 = (signed char)-100;
unsigned char var_10 = (unsigned char)57;
long long int var_11 = -8382378964126936513LL;
int zero = 0;
unsigned char var_15 = (unsigned char)180;
short var_16 = (short)18034;
unsigned char var_17 = (unsigned char)59;
int var_18 = -1028044458;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
