#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 334612510;
unsigned short var_6 = (unsigned short)53353;
unsigned long long int var_11 = 15018017879967669462ULL;
unsigned short var_16 = (unsigned short)12372;
unsigned long long int var_17 = 12173711633486413825ULL;
int zero = 0;
unsigned long long int var_19 = 16433883564357605685ULL;
unsigned short var_20 = (unsigned short)38256;
unsigned long long int var_21 = 7280259330861251185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
