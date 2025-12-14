#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4575919332781533045ULL;
short var_2 = (short)-22809;
long long int var_5 = 3145894836743128870LL;
long long int var_13 = -3258641012238432698LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 7902782823097096756ULL;
unsigned char var_19 = (unsigned char)0;
signed char var_20 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
