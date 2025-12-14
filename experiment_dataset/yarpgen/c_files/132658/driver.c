#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)110;
int var_4 = 26852139;
unsigned long long int var_5 = 8887889303888235532ULL;
unsigned long long int var_6 = 7938411263240916148ULL;
unsigned long long int var_8 = 4743098403855496390ULL;
_Bool var_12 = (_Bool)0;
int var_14 = 68763377;
long long int var_15 = -1204912453291461311LL;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
unsigned long long int var_21 = 1316488868208251844ULL;
int var_22 = -1277789475;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
