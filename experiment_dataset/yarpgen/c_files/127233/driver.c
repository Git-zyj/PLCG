#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 2628098092952050078LL;
short var_7 = (short)932;
int var_11 = 1360345555;
unsigned short var_17 = (unsigned short)7604;
unsigned long long int var_18 = 13681774268281476132ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)49120;
signed char var_21 = (signed char)78;
unsigned long long int var_22 = 8616560098314417995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
