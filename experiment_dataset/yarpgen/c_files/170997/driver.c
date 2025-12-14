#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)126;
unsigned long long int var_7 = 4600609115244667359ULL;
unsigned char var_8 = (unsigned char)91;
unsigned long long int var_11 = 6545085941517434051ULL;
int zero = 0;
long long int var_20 = -5057982019812849440LL;
short var_21 = (short)18995;
void init() {
}

void checksum() {
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
