#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5369614412458653009LL;
_Bool var_2 = (_Bool)1;
long long int var_7 = 6341418889517061202LL;
short var_8 = (short)-19362;
signed char var_17 = (signed char)52;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -8804574456182919627LL;
unsigned char var_20 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
