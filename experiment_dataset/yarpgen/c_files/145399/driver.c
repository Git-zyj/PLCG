#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4143392093U;
unsigned long long int var_2 = 9587824921257479210ULL;
int var_3 = -1656484036;
unsigned int var_5 = 1874214593U;
unsigned int var_6 = 1854636729U;
long long int var_8 = 2034515847950313614LL;
int zero = 0;
unsigned int var_10 = 2225251460U;
unsigned long long int var_11 = 5262188121472013730ULL;
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
