#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12359;
unsigned short var_3 = (unsigned short)35594;
unsigned long long int var_4 = 14785683062377588235ULL;
short var_6 = (short)5265;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
short var_13 = (short)19615;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
