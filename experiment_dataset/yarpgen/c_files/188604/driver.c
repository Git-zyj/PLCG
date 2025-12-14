#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)180;
unsigned short var_18 = (unsigned short)28290;
int zero = 0;
unsigned short var_20 = (unsigned short)40591;
long long int var_21 = -5627324666468059780LL;
unsigned char var_22 = (unsigned char)20;
unsigned char var_23 = (unsigned char)171;
unsigned long long int var_24 = 15437354686137686826ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
