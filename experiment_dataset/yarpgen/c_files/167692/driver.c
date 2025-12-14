#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12938605706214551553ULL;
long long int var_8 = -2431347272825198268LL;
unsigned short var_11 = (unsigned short)16954;
int zero = 0;
unsigned short var_19 = (unsigned short)38161;
unsigned char var_20 = (unsigned char)153;
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
