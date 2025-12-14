#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -254495993;
long long int var_7 = 914133540794021637LL;
unsigned long long int var_10 = 644741471636950620ULL;
unsigned short var_11 = (unsigned short)62554;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9457783696882067816ULL;
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
