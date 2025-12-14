#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3333;
unsigned int var_4 = 3913387809U;
long long int var_6 = 8598149628983602283LL;
unsigned int var_10 = 1217445185U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-27998;
short var_21 = (short)-27241;
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
