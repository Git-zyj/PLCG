#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
int var_5 = 1248992387;
long long int var_6 = -6990486436334348519LL;
short var_7 = (short)-26775;
unsigned long long int var_8 = 13202646960559569522ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)82;
unsigned int var_11 = 1755066032U;
long long int var_12 = -4158572745515170724LL;
unsigned int var_13 = 4154679180U;
int var_14 = 708566536;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
