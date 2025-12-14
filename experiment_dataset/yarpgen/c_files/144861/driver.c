#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2637085210U;
unsigned long long int var_4 = 9966141769793706845ULL;
signed char var_11 = (signed char)26;
_Bool var_12 = (_Bool)1;
unsigned char var_17 = (unsigned char)182;
int var_18 = 869439847;
int zero = 0;
long long int var_19 = -1638359267668715803LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
