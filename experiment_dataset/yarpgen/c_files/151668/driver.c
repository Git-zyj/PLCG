#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1307130100813243233LL;
unsigned short var_2 = (unsigned short)50198;
unsigned short var_7 = (unsigned short)31982;
signed char var_8 = (signed char)-34;
int zero = 0;
long long int var_10 = 7033465164357538804LL;
unsigned short var_11 = (unsigned short)3448;
signed char var_12 = (signed char)-95;
unsigned long long int var_13 = 3303827881054450630ULL;
unsigned long long int var_14 = 3570997998228507381ULL;
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
