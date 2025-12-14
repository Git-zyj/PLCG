#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8409050511675124222ULL;
unsigned short var_4 = (unsigned short)34515;
unsigned short var_11 = (unsigned short)49600;
int zero = 0;
unsigned short var_18 = (unsigned short)46847;
short var_19 = (short)20784;
short var_20 = (short)23807;
unsigned int var_21 = 1463612613U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
