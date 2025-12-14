#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1222342577;
short var_4 = (short)-20098;
unsigned long long int var_5 = 16412869034515086018ULL;
unsigned int var_6 = 330951936U;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = -203483089;
int var_11 = -83410699;
unsigned long long int var_12 = 10090073671522167720ULL;
long long int var_13 = 2194007938246312645LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
