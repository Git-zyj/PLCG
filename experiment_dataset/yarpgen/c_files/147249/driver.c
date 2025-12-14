#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 982187640;
unsigned long long int var_4 = 11065679076708475303ULL;
unsigned short var_7 = (unsigned short)21910;
unsigned long long int var_8 = 10421567225630516451ULL;
int var_9 = 1633099181;
long long int var_16 = -5031670747844153949LL;
int zero = 0;
signed char var_20 = (signed char)8;
int var_21 = -485127408;
long long int var_22 = 7138114413620458614LL;
unsigned long long int var_23 = 8762009304756870639ULL;
unsigned long long int var_24 = 4348083722373322900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
