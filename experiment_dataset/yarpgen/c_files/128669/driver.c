#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3112766506675449330LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)157;
unsigned long long int var_9 = 4094910099391526159ULL;
unsigned long long int var_10 = 14569727717022861241ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -953682509;
unsigned char var_14 = (unsigned char)142;
void init() {
}

void checksum() {
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
