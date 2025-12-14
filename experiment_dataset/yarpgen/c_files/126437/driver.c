#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-30;
int var_9 = 1085272060;
unsigned long long int var_12 = 14799474549023035834ULL;
short var_15 = (short)25996;
unsigned long long int var_18 = 16931728248985807943ULL;
int zero = 0;
unsigned int var_19 = 4166891640U;
unsigned short var_20 = (unsigned short)58914;
void init() {
}

void checksum() {
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
