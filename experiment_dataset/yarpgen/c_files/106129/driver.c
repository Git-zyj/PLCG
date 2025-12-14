#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5044291944359721335LL;
unsigned long long int var_1 = 7106110410389651545ULL;
unsigned short var_6 = (unsigned short)59996;
short var_8 = (short)17565;
unsigned int var_14 = 79993522U;
int zero = 0;
unsigned int var_16 = 2801879927U;
unsigned int var_17 = 2153119010U;
signed char var_18 = (signed char)-118;
unsigned int var_19 = 1495023589U;
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
