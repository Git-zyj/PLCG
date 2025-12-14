#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34158;
unsigned char var_4 = (unsigned char)249;
long long int var_11 = 2416658206511663083LL;
int zero = 0;
unsigned long long int var_18 = 4479995091172561718ULL;
unsigned short var_19 = (unsigned short)64143;
signed char var_20 = (signed char)1;
int var_21 = -389118351;
unsigned short var_22 = (unsigned short)9487;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
