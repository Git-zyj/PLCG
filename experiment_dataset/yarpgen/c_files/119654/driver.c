#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5466458213389203401ULL;
unsigned long long int var_5 = 18043639802573955562ULL;
unsigned short var_8 = (unsigned short)12741;
_Bool var_10 = (_Bool)0;
int var_13 = 1115811056;
int zero = 0;
int var_17 = 344998937;
unsigned char var_18 = (unsigned char)149;
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
