#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 744050177;
unsigned long long int var_3 = 2469680923295761881ULL;
int var_4 = -1601521060;
unsigned char var_8 = (unsigned char)215;
unsigned int var_9 = 15574395U;
unsigned char var_11 = (unsigned char)93;
short var_14 = (short)-23755;
int zero = 0;
short var_18 = (short)-27855;
short var_19 = (short)15162;
int var_20 = -17540437;
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
