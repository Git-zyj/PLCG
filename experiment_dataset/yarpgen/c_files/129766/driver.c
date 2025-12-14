#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11753022926950814084ULL;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-86;
short var_10 = (short)-6342;
short var_11 = (short)-29422;
unsigned long long int var_14 = 13248165969137897677ULL;
int zero = 0;
unsigned long long int var_19 = 5021207464010990078ULL;
signed char var_20 = (signed char)-113;
long long int var_21 = 6031682492124168689LL;
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
