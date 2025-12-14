#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
short var_6 = (short)-31463;
unsigned long long int var_8 = 11669060753272215174ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)141;
unsigned long long int var_11 = 16884777623313866913ULL;
unsigned int var_12 = 2411820207U;
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
