#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4170003300U;
unsigned int var_2 = 2431389332U;
int var_4 = 656765515;
int var_5 = -977682538;
unsigned char var_7 = (unsigned char)21;
long long int var_8 = 7237514530489234384LL;
int zero = 0;
long long int var_11 = -2197733784522158724LL;
long long int var_12 = -4194230099754656887LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
