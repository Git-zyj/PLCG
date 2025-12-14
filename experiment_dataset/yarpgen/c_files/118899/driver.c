#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1197389479;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 17752997314402588683ULL;
short var_14 = (short)6776;
int zero = 0;
unsigned int var_18 = 1727935969U;
unsigned char var_19 = (unsigned char)108;
void init() {
}

void checksum() {
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
