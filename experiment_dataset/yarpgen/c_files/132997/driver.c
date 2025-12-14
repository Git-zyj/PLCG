#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1284777783;
long long int var_7 = 2484637833745512395LL;
long long int var_9 = 6655723710659233750LL;
unsigned short var_12 = (unsigned short)35021;
unsigned long long int var_14 = 7882336802521457049ULL;
long long int var_18 = 5960762872006343952LL;
int zero = 0;
long long int var_20 = 8377739519033321372LL;
unsigned char var_21 = (unsigned char)183;
signed char var_22 = (signed char)47;
void init() {
}

void checksum() {
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
