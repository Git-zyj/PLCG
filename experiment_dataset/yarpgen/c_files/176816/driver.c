#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-5;
short var_5 = (short)-30074;
unsigned long long int var_7 = 10507884015164176401ULL;
int var_9 = 698897303;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)16441;
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
