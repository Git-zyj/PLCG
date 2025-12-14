#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6028826889899320466LL;
int var_7 = -779784633;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8301289590371727714LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 1949673303022208313ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 158733538U;
int zero = 0;
long long int var_20 = -5430119425178088778LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
