#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3983521148294020869LL;
signed char var_9 = (signed char)-3;
unsigned short var_12 = (unsigned short)35909;
int zero = 0;
short var_20 = (short)-20553;
unsigned char var_21 = (unsigned char)189;
long long int var_22 = -1027925522671341455LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
