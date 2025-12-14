#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8446;
signed char var_1 = (signed char)101;
signed char var_2 = (signed char)79;
long long int var_4 = 8898117775878390473LL;
unsigned long long int var_7 = 2475383556387972510ULL;
unsigned short var_9 = (unsigned short)53279;
unsigned long long int var_11 = 14548178278722131454ULL;
int zero = 0;
long long int var_12 = 4321596613281090300LL;
unsigned short var_13 = (unsigned short)25675;
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
