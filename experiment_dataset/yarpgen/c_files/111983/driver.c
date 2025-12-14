#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1408699982558969458LL;
_Bool var_9 = (_Bool)1;
int var_10 = 1817118467;
int zero = 0;
long long int var_11 = -7433628538483706809LL;
unsigned short var_12 = (unsigned short)12549;
unsigned long long int var_13 = 3153596214090961720ULL;
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
