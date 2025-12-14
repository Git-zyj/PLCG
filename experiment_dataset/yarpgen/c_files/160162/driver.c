#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-82;
unsigned char var_5 = (unsigned char)236;
unsigned char var_7 = (unsigned char)249;
long long int var_10 = 8285434873025819459LL;
signed char var_14 = (signed char)-106;
unsigned short var_15 = (unsigned short)24224;
int zero = 0;
signed char var_17 = (signed char)-79;
short var_18 = (short)-4100;
long long int var_19 = 3756659872900727066LL;
signed char var_20 = (signed char)-28;
signed char var_21 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
