#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 138749956052184130LL;
long long int var_4 = 7155645344151146915LL;
unsigned int var_7 = 2055178753U;
unsigned char var_10 = (unsigned char)174;
long long int var_11 = 7029119505427990897LL;
unsigned int var_12 = 2929150047U;
int zero = 0;
unsigned short var_13 = (unsigned short)60982;
unsigned long long int var_14 = 15230957319410843650ULL;
signed char var_15 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
