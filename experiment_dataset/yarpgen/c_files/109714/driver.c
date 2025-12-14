#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18808;
signed char var_9 = (signed char)-118;
unsigned short var_10 = (unsigned short)49752;
signed char var_12 = (signed char)-34;
unsigned int var_14 = 1646281956U;
short var_17 = (short)-15492;
int var_18 = 72452838;
int zero = 0;
signed char var_20 = (signed char)89;
unsigned int var_21 = 1215997434U;
unsigned short var_22 = (unsigned short)1692;
signed char var_23 = (signed char)67;
unsigned int var_24 = 4050053808U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
