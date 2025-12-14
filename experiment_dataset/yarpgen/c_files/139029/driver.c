#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-5;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 11323863423095277732ULL;
int var_7 = 1874335137;
unsigned long long int var_8 = 14908034001585948295ULL;
unsigned long long int var_9 = 15041914293575459020ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 9483607329189929430ULL;
unsigned long long int var_12 = 14686413998193827626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
