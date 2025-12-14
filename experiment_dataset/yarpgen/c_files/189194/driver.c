#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 372768842665134234ULL;
unsigned int var_4 = 2311844691U;
unsigned short var_5 = (unsigned short)23648;
int var_6 = -1177394912;
short var_9 = (short)-4496;
int zero = 0;
short var_10 = (short)-18418;
unsigned int var_11 = 581603104U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
