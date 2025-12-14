#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-38;
signed char var_12 = (signed char)-1;
unsigned short var_16 = (unsigned short)35879;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-6141;
long long int var_22 = 4770120272395306970LL;
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
