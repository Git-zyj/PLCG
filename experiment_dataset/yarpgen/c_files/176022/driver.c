#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4043640354U;
signed char var_1 = (signed char)91;
unsigned short var_2 = (unsigned short)39519;
unsigned char var_5 = (unsigned char)136;
unsigned int var_9 = 256802481U;
unsigned short var_17 = (unsigned short)14325;
signed char var_18 = (signed char)127;
int zero = 0;
long long int var_20 = 3779338356711895471LL;
signed char var_21 = (signed char)-122;
unsigned char var_22 = (unsigned char)218;
unsigned char var_23 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
