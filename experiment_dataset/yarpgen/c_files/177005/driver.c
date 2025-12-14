#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2050872074972060212ULL;
signed char var_4 = (signed char)-56;
long long int var_7 = 8377505031905675245LL;
unsigned long long int var_9 = 11777263776624806647ULL;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
long long int var_17 = 5993618419546122344LL;
unsigned char var_18 = (unsigned char)45;
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
