#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8538;
int var_2 = -985341383;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)63803;
unsigned long long int var_8 = 10853970848300610900ULL;
unsigned long long int var_11 = 1827857100336185038ULL;
int zero = 0;
unsigned long long int var_13 = 10342732090576350182ULL;
signed char var_14 = (signed char)76;
int var_15 = 258999354;
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
