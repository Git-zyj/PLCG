#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5651282151837381033LL;
unsigned int var_9 = 3285885851U;
int zero = 0;
unsigned long long int var_18 = 8076529245835033142ULL;
unsigned short var_19 = (unsigned short)51908;
long long int var_20 = 6348771692456977169LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
