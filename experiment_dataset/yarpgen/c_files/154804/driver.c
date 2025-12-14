#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)20887;
unsigned long long int var_10 = 8425690719036074352ULL;
unsigned long long int var_15 = 4618765603815152989ULL;
unsigned short var_17 = (unsigned short)60955;
long long int var_18 = 2794173477451496198LL;
int zero = 0;
unsigned long long int var_19 = 14238066204913358135ULL;
unsigned long long int var_20 = 14831258196293769516ULL;
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
