#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)177;
unsigned char var_6 = (unsigned char)105;
unsigned long long int var_7 = 17479224120043200622ULL;
unsigned short var_8 = (unsigned short)40531;
unsigned int var_10 = 3133007859U;
int zero = 0;
unsigned int var_13 = 275454733U;
unsigned long long int var_14 = 13583990803051760558ULL;
void init() {
}

void checksum() {
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
