#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
long long int var_9 = -8954242410336351875LL;
long long int var_14 = -8003110433474095359LL;
unsigned long long int var_18 = 8730281086666867823ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)4552;
signed char var_21 = (signed char)73;
unsigned int var_22 = 1916060075U;
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
