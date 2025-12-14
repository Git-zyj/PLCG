#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
unsigned short var_4 = (unsigned short)55021;
short var_8 = (short)6946;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)39250;
int zero = 0;
unsigned long long int var_20 = 360722424684704139ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
