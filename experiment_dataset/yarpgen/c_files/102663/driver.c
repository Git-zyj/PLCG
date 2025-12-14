#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3449359270U;
unsigned char var_6 = (unsigned char)102;
_Bool var_10 = (_Bool)0;
int var_11 = 1022917259;
short var_13 = (short)2041;
unsigned long long int var_14 = 14485401779290307823ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)169;
short var_18 = (short)20506;
long long int var_19 = -374309640674534780LL;
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
