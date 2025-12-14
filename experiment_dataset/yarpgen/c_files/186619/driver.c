#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11828;
signed char var_2 = (signed char)-123;
unsigned long long int var_5 = 7248301167632538792ULL;
unsigned long long int var_6 = 17509271903206298185ULL;
signed char var_9 = (signed char)79;
short var_10 = (short)-25363;
int zero = 0;
signed char var_13 = (signed char)-64;
signed char var_14 = (signed char)89;
short var_15 = (short)-29802;
long long int var_16 = -1260739934023592383LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
