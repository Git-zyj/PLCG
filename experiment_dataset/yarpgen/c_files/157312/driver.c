#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1556391163341712706LL;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_11 = (short)31587;
long long int var_12 = 5183957755254831189LL;
int zero = 0;
unsigned short var_13 = (unsigned short)32249;
unsigned long long int var_14 = 17127064084712465967ULL;
int var_15 = -581080055;
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
