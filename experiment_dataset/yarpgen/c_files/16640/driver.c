#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)59483;
long long int var_10 = 5816852000775938478LL;
short var_11 = (short)-17268;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8012625321123988047ULL;
signed char var_18 = (signed char)41;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 15078620213960969306ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
