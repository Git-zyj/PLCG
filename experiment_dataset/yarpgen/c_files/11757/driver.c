#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 97584777U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_4 = 934366309430598790LL;
unsigned long long int var_5 = 11963981070217379267ULL;
unsigned long long int var_9 = 14114900942715030103ULL;
int zero = 0;
long long int var_10 = 5288822908258247898LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5421813458180626313ULL;
_Bool var_13 = (_Bool)0;
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
