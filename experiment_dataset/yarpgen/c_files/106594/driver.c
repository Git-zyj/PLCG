#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7257089786795319170LL;
int var_7 = 577442540;
long long int var_8 = 6885012361685204202LL;
long long int var_9 = -5104025391591619986LL;
int zero = 0;
long long int var_11 = 7368796448625198204LL;
unsigned char var_12 = (unsigned char)6;
long long int var_13 = -2590196387442363415LL;
unsigned short var_14 = (unsigned short)64019;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
