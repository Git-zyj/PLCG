#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17103657136799582986ULL;
unsigned short var_2 = (unsigned short)38267;
unsigned int var_4 = 3335041345U;
signed char var_6 = (signed char)-25;
unsigned int var_9 = 765683285U;
signed char var_12 = (signed char)13;
int zero = 0;
long long int var_14 = 6292889412065847696LL;
short var_15 = (short)-7976;
signed char var_16 = (signed char)41;
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
