#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8343474045602239085LL;
unsigned int var_1 = 3893450510U;
signed char var_2 = (signed char)36;
signed char var_9 = (signed char)-18;
int zero = 0;
long long int var_10 = -3399880237381051288LL;
unsigned int var_11 = 1643717439U;
short var_12 = (short)29213;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
