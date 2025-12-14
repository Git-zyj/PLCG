#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 395973156315789665LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 5648203232940593984ULL;
short var_15 = (short)-21085;
int zero = 0;
int var_16 = -822539352;
unsigned long long int var_17 = 7198229426707736644ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
