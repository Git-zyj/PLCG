#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1954183916084241575LL;
long long int var_4 = -84081159283949933LL;
unsigned long long int var_5 = 15507743956282105094ULL;
unsigned char var_8 = (unsigned char)63;
unsigned long long int var_10 = 15706666332835548038ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)56143;
int var_12 = -1015936960;
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
