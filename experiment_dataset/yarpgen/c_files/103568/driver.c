#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 598497042286136844LL;
unsigned long long int var_5 = 8165657292037336522ULL;
unsigned char var_7 = (unsigned char)166;
long long int var_15 = -4809129547045253596LL;
int zero = 0;
unsigned char var_18 = (unsigned char)74;
long long int var_19 = -1581638072631914265LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
