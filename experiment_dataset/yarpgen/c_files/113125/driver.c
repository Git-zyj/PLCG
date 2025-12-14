#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
signed char var_1 = (signed char)(-127 - 1);
unsigned long long int var_2 = 8020356038355704394ULL;
short var_3 = (short)32602;
unsigned long long int var_4 = 14016679575842811376ULL;
long long int var_6 = -7682114433170862101LL;
unsigned short var_8 = (unsigned short)22887;
unsigned long long int var_9 = 7658557632659637001ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)51100;
short var_11 = (short)26676;
unsigned int var_12 = 919901560U;
int var_13 = 1232113423;
signed char var_14 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
