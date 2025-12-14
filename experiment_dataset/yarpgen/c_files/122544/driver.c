#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18503;
short var_2 = (short)-32426;
unsigned long long int var_4 = 4721989109883496333ULL;
unsigned long long int var_5 = 1007284215591602362ULL;
signed char var_8 = (signed char)9;
unsigned short var_9 = (unsigned short)47208;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7792826755024531518ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16912487548004748075ULL;
unsigned short var_14 = (unsigned short)23433;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
