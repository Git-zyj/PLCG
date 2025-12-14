#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6595640775468809181ULL;
unsigned long long int var_6 = 14692089980501318760ULL;
unsigned long long int var_8 = 6682117051568701249ULL;
unsigned long long int var_10 = 4607686157311156286ULL;
short var_17 = (short)18257;
int zero = 0;
unsigned long long int var_18 = 3290460305864743518ULL;
unsigned int var_19 = 1324616277U;
int var_20 = -1931143694;
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
