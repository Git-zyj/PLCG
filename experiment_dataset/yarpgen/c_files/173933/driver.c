#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15961473528523202872ULL;
unsigned long long int var_1 = 7218769231222658164ULL;
unsigned short var_2 = (unsigned short)22816;
long long int var_3 = 930117168396759986LL;
unsigned short var_6 = (unsigned short)47773;
int zero = 0;
long long int var_10 = 689434722990418039LL;
short var_11 = (short)-28618;
long long int var_12 = -7995584767372730427LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
