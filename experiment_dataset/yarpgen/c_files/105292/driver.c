#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned short var_4 = (unsigned short)22667;
unsigned short var_5 = (unsigned short)27669;
unsigned short var_10 = (unsigned short)39348;
long long int var_11 = 4670559888433868805LL;
int zero = 0;
int var_16 = -481413942;
unsigned short var_17 = (unsigned short)41215;
signed char var_18 = (signed char)-3;
unsigned long long int var_19 = 13341312884059042291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
