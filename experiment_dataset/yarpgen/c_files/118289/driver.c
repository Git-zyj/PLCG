#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21672;
unsigned int var_4 = 1283611309U;
int var_5 = -2088621654;
int var_6 = -182169768;
unsigned int var_9 = 283567076U;
signed char var_10 = (signed char)-113;
int zero = 0;
unsigned long long int var_12 = 15779581365354248111ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 340436139U;
void init() {
}

void checksum() {
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
