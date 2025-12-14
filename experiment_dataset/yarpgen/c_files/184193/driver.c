#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -391081886;
int var_4 = 2018748862;
long long int var_13 = 4132437074246227202LL;
signed char var_14 = (signed char)40;
signed char var_16 = (signed char)110;
unsigned long long int var_17 = 11557946695864357931ULL;
int zero = 0;
signed char var_18 = (signed char)-99;
unsigned long long int var_19 = 13626120127079303122ULL;
signed char var_20 = (signed char)118;
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
