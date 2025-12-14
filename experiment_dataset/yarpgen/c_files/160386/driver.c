#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned int var_2 = 2254590683U;
unsigned int var_3 = 3279967211U;
long long int var_4 = -7650361166952582109LL;
signed char var_6 = (signed char)-121;
long long int var_7 = 6318312519052903015LL;
unsigned long long int var_9 = 9203845026568231124ULL;
int zero = 0;
int var_10 = 1192265618;
int var_11 = 294240001;
short var_12 = (short)25071;
signed char var_13 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
