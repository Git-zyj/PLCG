#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28208;
unsigned char var_3 = (unsigned char)156;
long long int var_5 = -375438299255844489LL;
unsigned int var_7 = 1969187661U;
unsigned char var_8 = (unsigned char)34;
unsigned char var_9 = (unsigned char)35;
long long int var_10 = -2378366053611548295LL;
int zero = 0;
signed char var_11 = (signed char)52;
long long int var_12 = -620671886058832116LL;
unsigned long long int var_13 = 4569224914432288126ULL;
unsigned char var_14 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
