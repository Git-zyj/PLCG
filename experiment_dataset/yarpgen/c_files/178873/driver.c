#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8168192863215827758LL;
long long int var_5 = 335458480685926534LL;
int var_7 = -226411511;
signed char var_9 = (signed char)50;
int zero = 0;
unsigned char var_10 = (unsigned char)115;
signed char var_11 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
