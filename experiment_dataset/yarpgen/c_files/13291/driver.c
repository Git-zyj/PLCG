#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1823441620687114633LL;
unsigned int var_5 = 3874432517U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2117689330U;
long long int var_10 = 523738843619846473LL;
int zero = 0;
unsigned char var_11 = (unsigned char)131;
unsigned long long int var_12 = 1396265609152717101ULL;
signed char var_13 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
