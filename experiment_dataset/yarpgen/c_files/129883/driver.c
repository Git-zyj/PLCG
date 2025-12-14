#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6055607168464441637LL;
unsigned long long int var_1 = 14002208855644647430ULL;
unsigned long long int var_4 = 8822201402740619571ULL;
unsigned short var_7 = (unsigned short)15653;
signed char var_9 = (signed char)-88;
int zero = 0;
unsigned short var_16 = (unsigned short)24381;
unsigned long long int var_17 = 5345415147568666905ULL;
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
