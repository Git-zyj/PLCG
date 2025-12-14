#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 504179352;
signed char var_7 = (signed char)-1;
int var_11 = 1478056779;
int zero = 0;
long long int var_17 = -3228235866873269538LL;
int var_18 = 1801078143;
int var_19 = -366616441;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
