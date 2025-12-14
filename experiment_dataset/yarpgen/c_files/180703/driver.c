#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5271538624635790194LL;
unsigned char var_2 = (unsigned char)194;
unsigned short var_4 = (unsigned short)41830;
unsigned long long int var_6 = 13062195389210366791ULL;
unsigned int var_11 = 2203305360U;
unsigned short var_12 = (unsigned short)63422;
unsigned int var_13 = 2363467846U;
unsigned int var_14 = 3002705998U;
int zero = 0;
long long int var_16 = -4017127707486968465LL;
unsigned int var_17 = 2396919435U;
unsigned int var_18 = 2429413332U;
long long int var_19 = -3153581022705852245LL;
unsigned short var_20 = (unsigned short)14078;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
