#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3635659136517305028ULL;
unsigned long long int var_13 = 14831008963608699907ULL;
int var_17 = -1567436456;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)46243;
int var_21 = 893436739;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
