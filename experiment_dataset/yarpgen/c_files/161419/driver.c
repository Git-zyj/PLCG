#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7829182915617640655LL;
signed char var_4 = (signed char)58;
short var_5 = (short)-32263;
long long int var_6 = 8578234060397092424LL;
long long int var_7 = -3999111778855031766LL;
short var_9 = (short)-31593;
int zero = 0;
int var_12 = 1985749180;
int var_13 = 2104932531;
signed char var_14 = (signed char)17;
unsigned short var_15 = (unsigned short)51600;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
