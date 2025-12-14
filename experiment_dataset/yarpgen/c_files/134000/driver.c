#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 85623807U;
long long int var_1 = -5568184816146561515LL;
signed char var_7 = (signed char)26;
unsigned long long int var_9 = 11163627615740727306ULL;
unsigned int var_10 = 1974535070U;
int zero = 0;
unsigned int var_13 = 3428223638U;
unsigned int var_14 = 3522110668U;
short var_15 = (short)-9536;
long long int var_16 = 3253485161749282838LL;
unsigned long long int var_17 = 3281189031864548097ULL;
unsigned int var_18 = 1636828482U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
