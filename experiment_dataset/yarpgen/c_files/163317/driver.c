#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
unsigned long long int var_4 = 4980207136178382264ULL;
short var_5 = (short)27711;
signed char var_6 = (signed char)-95;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15317046272614247821ULL;
long long int var_11 = -4140219289937258878LL;
int zero = 0;
int var_13 = -697244761;
unsigned char var_14 = (unsigned char)149;
unsigned int var_15 = 4003921229U;
short var_16 = (short)-19638;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
