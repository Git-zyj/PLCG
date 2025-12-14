#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
long long int var_2 = 2890107331239159207LL;
unsigned long long int var_3 = 12025883007905899781ULL;
signed char var_12 = (signed char)110;
int zero = 0;
int var_19 = 1439280466;
unsigned long long int var_20 = 10059654254271143596ULL;
void init() {
}

void checksum() {
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
