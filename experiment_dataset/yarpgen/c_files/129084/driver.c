#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18133593917091495019ULL;
unsigned int var_1 = 3633390537U;
int var_5 = 460799168;
unsigned int var_6 = 789993112U;
signed char var_8 = (signed char)9;
int var_14 = -1790413908;
int zero = 0;
signed char var_19 = (signed char)11;
unsigned int var_20 = 3292506008U;
unsigned short var_21 = (unsigned short)25705;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
