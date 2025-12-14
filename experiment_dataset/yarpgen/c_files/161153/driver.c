#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8325158187631156099LL;
long long int var_1 = -6908023340638121464LL;
signed char var_2 = (signed char)39;
unsigned long long int var_3 = 15366107404121341979ULL;
unsigned int var_7 = 3252802857U;
unsigned long long int var_8 = 15486376470934869247ULL;
unsigned short var_9 = (unsigned short)33461;
int zero = 0;
long long int var_11 = -1294596682533329733LL;
unsigned short var_12 = (unsigned short)9756;
unsigned short var_13 = (unsigned short)4923;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
