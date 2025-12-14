#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 545980210496311906LL;
signed char var_3 = (signed char)7;
unsigned short var_5 = (unsigned short)19336;
unsigned long long int var_6 = 18274197013288552082ULL;
signed char var_9 = (signed char)77;
int zero = 0;
long long int var_10 = -4281955850698356346LL;
unsigned long long int var_11 = 1718236415451257138ULL;
unsigned short var_12 = (unsigned short)50557;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
