#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4151893457U;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-72;
signed char var_6 = (signed char)-68;
signed char var_10 = (signed char)61;
unsigned short var_12 = (unsigned short)46175;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)366;
unsigned long long int var_17 = 6563403842266514291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
