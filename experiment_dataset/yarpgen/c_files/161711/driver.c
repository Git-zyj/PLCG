#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
_Bool var_9 = (_Bool)0;
int var_14 = -246460638;
unsigned short var_16 = (unsigned short)22286;
int zero = 0;
int var_18 = -2025109287;
signed char var_19 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
