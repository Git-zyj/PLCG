#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 666371502U;
unsigned short var_5 = (unsigned short)64103;
unsigned int var_8 = 1212618853U;
signed char var_10 = (signed char)31;
unsigned int var_11 = 3170734024U;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = 1855766707;
unsigned long long int var_20 = 16605108481252256932ULL;
unsigned int var_21 = 652309508U;
unsigned char var_22 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
