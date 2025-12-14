#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16195818972746587141ULL;
long long int var_2 = 2028295297123703414LL;
signed char var_3 = (signed char)1;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 754010871U;
int zero = 0;
unsigned long long int var_12 = 1047497000327000146ULL;
unsigned short var_13 = (unsigned short)15507;
int var_14 = -111176149;
void init() {
}

void checksum() {
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
