#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11487;
signed char var_2 = (signed char)-78;
unsigned long long int var_6 = 5604209043035970574ULL;
unsigned int var_8 = 788746043U;
long long int var_9 = 1598778550568876360LL;
unsigned long long int var_12 = 2826168999635227772ULL;
int zero = 0;
unsigned long long int var_18 = 7272859045110525588ULL;
short var_19 = (short)-1838;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
