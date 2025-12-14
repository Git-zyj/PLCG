#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
signed char var_2 = (signed char)-21;
unsigned long long int var_4 = 3978978589770320072ULL;
long long int var_5 = -5637335516676348228LL;
long long int var_6 = -6762675926672973199LL;
unsigned long long int var_7 = 6047930251797583592ULL;
unsigned long long int var_10 = 11715889619101738644ULL;
int zero = 0;
long long int var_11 = 7452101940851056907LL;
unsigned long long int var_12 = 8114516814594259021ULL;
long long int var_13 = 6540907358444375691LL;
unsigned long long int var_14 = 12834087374338911465ULL;
void init() {
}

void checksum() {
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
