#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7049163880854652224LL;
signed char var_3 = (signed char)-88;
unsigned long long int var_4 = 16774828636476480709ULL;
int var_9 = 1836922524;
int zero = 0;
unsigned long long int var_19 = 3340853190916890971ULL;
unsigned long long int var_20 = 16007109265202290665ULL;
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
