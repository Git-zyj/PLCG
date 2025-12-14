#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11809831089882809795ULL;
signed char var_2 = (signed char)53;
signed char var_5 = (signed char)70;
unsigned long long int var_8 = 14370844851232625415ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)27942;
unsigned long long int var_11 = 7468102357959242302ULL;
unsigned short var_12 = (unsigned short)57462;
unsigned short var_13 = (unsigned short)28926;
unsigned long long int var_14 = 8613085471077984810ULL;
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
