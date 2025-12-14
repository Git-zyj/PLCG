#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1169215344U;
long long int var_5 = 3423268910053008792LL;
unsigned short var_6 = (unsigned short)13334;
unsigned int var_15 = 1085813022U;
int zero = 0;
short var_17 = (short)-3815;
unsigned short var_18 = (unsigned short)35778;
unsigned short var_19 = (unsigned short)62457;
void init() {
}

void checksum() {
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
