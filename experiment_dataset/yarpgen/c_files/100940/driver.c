#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
short var_3 = (short)30289;
int zero = 0;
long long int var_20 = -298741376259414784LL;
unsigned char var_21 = (unsigned char)3;
int var_22 = -302099673;
signed char var_23 = (signed char)48;
signed char var_24 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
