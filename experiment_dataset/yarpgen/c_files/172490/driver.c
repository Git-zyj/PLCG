#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37905;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)63035;
int var_13 = 530795262;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
short var_19 = (short)26696;
unsigned long long int var_20 = 9679642236274160677ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
