#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60493;
int var_1 = -961615897;
unsigned int var_5 = 3155840549U;
unsigned short var_7 = (unsigned short)38821;
signed char var_11 = (signed char)124;
int zero = 0;
unsigned int var_12 = 4040601846U;
long long int var_13 = 8733452879886129252LL;
int var_14 = -626818774;
short var_15 = (short)15174;
unsigned long long int var_16 = 3002836863538588407ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
