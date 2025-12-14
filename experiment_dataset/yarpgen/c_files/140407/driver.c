#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17411;
unsigned long long int var_9 = 6780661356981018150ULL;
int var_12 = 1120431210;
int var_18 = -576532804;
int zero = 0;
int var_19 = 115214420;
short var_20 = (short)-25857;
unsigned char var_21 = (unsigned char)61;
long long int var_22 = -2405331050745313891LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
