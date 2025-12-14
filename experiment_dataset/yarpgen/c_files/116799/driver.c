#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17897871383492025947ULL;
signed char var_2 = (signed char)-43;
unsigned int var_6 = 3191819514U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 6401037393047321544ULL;
int zero = 0;
short var_13 = (short)-8957;
long long int var_14 = -9064049537100078391LL;
unsigned int var_15 = 439947498U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
