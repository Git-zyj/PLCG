#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6444836553270154004LL;
unsigned long long int var_8 = 17502282674933522248ULL;
signed char var_10 = (signed char)44;
_Bool var_12 = (_Bool)0;
short var_16 = (short)23501;
int zero = 0;
int var_17 = 604535236;
unsigned char var_18 = (unsigned char)180;
short var_19 = (short)6986;
unsigned long long int var_20 = 18405713228528891639ULL;
void init() {
}

void checksum() {
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
