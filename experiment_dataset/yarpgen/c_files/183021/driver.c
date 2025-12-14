#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14707749840667315443ULL;
unsigned char var_6 = (unsigned char)183;
signed char var_8 = (signed char)5;
unsigned short var_9 = (unsigned short)38107;
int var_13 = 1158129991;
int zero = 0;
long long int var_14 = 1470579884705988054LL;
long long int var_15 = 5037161254226286749LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
