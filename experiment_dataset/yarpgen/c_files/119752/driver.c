#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1913944056;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)26126;
signed char var_6 = (signed char)23;
unsigned char var_8 = (unsigned char)140;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -6131084349866444433LL;
int var_13 = -116778697;
signed char var_14 = (signed char)-28;
signed char var_15 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
