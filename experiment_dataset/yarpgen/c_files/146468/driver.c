#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned short var_3 = (unsigned short)48435;
int var_6 = -1565446656;
int var_8 = -163147182;
int zero = 0;
int var_14 = 393504624;
long long int var_15 = -3132147418998246855LL;
long long int var_16 = 7304349862516664241LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
