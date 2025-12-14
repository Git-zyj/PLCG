#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 198349247;
unsigned char var_2 = (unsigned char)101;
unsigned int var_4 = 3323459156U;
unsigned char var_5 = (unsigned char)19;
unsigned int var_7 = 3725660284U;
unsigned int var_8 = 770313080U;
unsigned int var_9 = 1354906719U;
int zero = 0;
unsigned long long int var_18 = 17653226905226725792ULL;
unsigned int var_19 = 1293203098U;
unsigned int var_20 = 3578743665U;
unsigned int var_21 = 1917151055U;
unsigned int var_22 = 3278869465U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
