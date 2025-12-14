#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1493960297;
long long int var_7 = -4899824019943262544LL;
long long int var_8 = 6682265080995252403LL;
unsigned long long int var_9 = 6174603194583955817ULL;
int zero = 0;
unsigned long long int var_10 = 6817317799581490742ULL;
long long int var_11 = -1615934976119096135LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
