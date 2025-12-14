#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49573;
unsigned long long int var_5 = 1899869816431459097ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)19746;
unsigned long long int var_10 = 12709067723653615435ULL;
unsigned char var_11 = (unsigned char)98;
int zero = 0;
unsigned long long int var_12 = 10132083460107312612ULL;
short var_13 = (short)-20929;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
