#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13924602554213618135ULL;
unsigned long long int var_3 = 10060100332070565747ULL;
unsigned short var_8 = (unsigned short)17325;
int zero = 0;
unsigned int var_11 = 1007847469U;
unsigned short var_12 = (unsigned short)51875;
void init() {
}

void checksum() {
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
