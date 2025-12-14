#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)9624;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-25728;
_Bool var_11 = (_Bool)1;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
int var_20 = 1167924792;
unsigned char var_21 = (unsigned char)67;
unsigned long long int var_22 = 5909436378692954728ULL;
void init() {
}

void checksum() {
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
