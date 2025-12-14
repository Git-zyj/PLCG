#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3277195014U;
signed char var_2 = (signed char)15;
int var_4 = 1732117068;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2876971856909704908LL;
long long int var_19 = -1591010679129345332LL;
int var_20 = 1795835664;
unsigned char var_21 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
