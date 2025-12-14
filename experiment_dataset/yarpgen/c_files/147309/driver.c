#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
long long int var_1 = 2124045948933060245LL;
signed char var_4 = (signed char)-45;
long long int var_5 = -948665822338329841LL;
unsigned long long int var_6 = 8180011577695577784ULL;
long long int var_7 = 7758712672427303100LL;
long long int var_9 = -2914619570892507048LL;
unsigned short var_10 = (unsigned short)58870;
long long int var_12 = -2622463619219645322LL;
int zero = 0;
long long int var_14 = 5058314782320628297LL;
unsigned int var_15 = 3892626736U;
signed char var_16 = (signed char)68;
void init() {
}

void checksum() {
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
