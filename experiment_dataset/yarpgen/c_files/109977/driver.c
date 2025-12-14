#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8078674362774252964LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 7300785894312180210LL;
unsigned long long int var_8 = 9974174078841413184ULL;
unsigned char var_9 = (unsigned char)13;
_Bool var_10 = (_Bool)0;
int var_11 = -1890988163;
long long int var_12 = 6218658524340141423LL;
int zero = 0;
long long int var_13 = 4392569318119956220LL;
unsigned long long int var_14 = 477071301880914827ULL;
void init() {
}

void checksum() {
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
