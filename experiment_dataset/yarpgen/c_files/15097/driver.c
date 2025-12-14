#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64965;
long long int var_1 = 7169582234549299128LL;
int var_2 = 1411012356;
unsigned short var_4 = (unsigned short)61667;
unsigned int var_8 = 1173909867U;
int zero = 0;
long long int var_12 = -3196656884035886020LL;
unsigned short var_13 = (unsigned short)6217;
int var_14 = 592365060;
long long int var_15 = 4464647152421324580LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
