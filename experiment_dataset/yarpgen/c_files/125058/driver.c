#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1413144273;
long long int var_2 = 158145893071857958LL;
unsigned char var_3 = (unsigned char)23;
unsigned long long int var_4 = 14543964002616067045ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)51;
unsigned long long int var_15 = 3982337894006999239ULL;
int var_16 = 1535937576;
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
