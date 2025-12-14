#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43183;
_Bool var_6 = (_Bool)0;
int var_7 = -2016803014;
unsigned long long int var_9 = 182880349880330107ULL;
int zero = 0;
long long int var_12 = -7677810583296082085LL;
unsigned char var_13 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
