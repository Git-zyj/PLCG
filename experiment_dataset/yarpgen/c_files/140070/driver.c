#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -980868168;
int var_6 = -1034217228;
signed char var_10 = (signed char)122;
int zero = 0;
unsigned long long int var_14 = 13066655289874166166ULL;
signed char var_15 = (signed char)85;
unsigned long long int var_16 = 16219231494170391060ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
