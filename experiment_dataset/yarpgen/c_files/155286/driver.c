#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14004246828471436711ULL;
unsigned short var_2 = (unsigned short)44184;
unsigned long long int var_3 = 16777933468023116049ULL;
unsigned char var_4 = (unsigned char)211;
unsigned char var_5 = (unsigned char)105;
unsigned long long int var_6 = 12359494664339030829ULL;
unsigned long long int var_8 = 16437048140234360076ULL;
unsigned short var_9 = (unsigned short)38743;
unsigned long long int var_10 = 451825443676485914ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)21654;
unsigned char var_12 = (unsigned char)89;
unsigned short var_13 = (unsigned short)53112;
int var_14 = -1131648709;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
