#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2691270745U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)187;
signed char var_9 = (signed char)10;
signed char var_10 = (signed char)44;
_Bool var_11 = (_Bool)0;
int var_13 = 1586133698;
int zero = 0;
unsigned int var_15 = 3997739136U;
long long int var_16 = 3459779936378491760LL;
unsigned long long int var_17 = 8892017860938665962ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
