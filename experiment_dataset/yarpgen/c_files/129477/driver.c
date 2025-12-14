#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4601;
short var_6 = (short)19118;
long long int var_7 = -5060864098039269210LL;
long long int var_12 = 8033499267633693359LL;
short var_15 = (short)-14618;
int zero = 0;
short var_16 = (short)-1567;
unsigned char var_17 = (unsigned char)28;
unsigned char var_18 = (unsigned char)175;
short var_19 = (short)28773;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
