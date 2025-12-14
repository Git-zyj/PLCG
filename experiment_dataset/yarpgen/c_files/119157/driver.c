#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)197;
long long int var_9 = -4932354708088164686LL;
unsigned long long int var_18 = 18185990380515137459ULL;
int zero = 0;
long long int var_19 = 2263017834830750404LL;
short var_20 = (short)-10696;
unsigned long long int var_21 = 8974685496562553202ULL;
unsigned char var_22 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
