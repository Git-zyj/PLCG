#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4825360074924850745LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -1353316023469056143LL;
long long int var_9 = 6075884097379703568LL;
unsigned long long int var_10 = 8377189763743768535ULL;
int zero = 0;
unsigned long long int var_14 = 18361259631631998183ULL;
long long int var_15 = 377531478421334465LL;
void init() {
}

void checksum() {
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
