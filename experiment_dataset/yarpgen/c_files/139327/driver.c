#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = 6458671027137064403LL;
unsigned char var_11 = (unsigned char)45;
long long int var_15 = 5695139097688828799LL;
int zero = 0;
unsigned long long int var_17 = 11571671800917828398ULL;
long long int var_18 = 3411989633040025399LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
