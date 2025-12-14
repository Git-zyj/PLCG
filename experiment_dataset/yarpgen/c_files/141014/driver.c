#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 912657785;
short var_7 = (short)-29209;
unsigned short var_13 = (unsigned short)23410;
int zero = 0;
unsigned long long int var_20 = 3162686246957569439ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 912849880313429614ULL;
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
