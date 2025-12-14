#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)116;
unsigned short var_4 = (unsigned short)33461;
signed char var_5 = (signed char)17;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8045312917329066074LL;
signed char var_11 = (signed char)-83;
int zero = 0;
short var_12 = (short)20972;
long long int var_13 = 5426866149193102532LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
