#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-58;
unsigned char var_11 = (unsigned char)110;
unsigned long long int var_12 = 14944857130126779638ULL;
int zero = 0;
unsigned long long int var_14 = 8261464483522600471ULL;
signed char var_15 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
