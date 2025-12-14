#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15708084454687422434ULL;
unsigned short var_2 = (unsigned short)65063;
unsigned char var_3 = (unsigned char)78;
unsigned long long int var_5 = 2389394143177389288ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 55467773U;
unsigned long long int var_10 = 13439569277116233900ULL;
unsigned short var_11 = (unsigned short)15336;
unsigned short var_13 = (unsigned short)26930;
int zero = 0;
unsigned long long int var_16 = 15466189236184143902ULL;
int var_17 = 1851358840;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
