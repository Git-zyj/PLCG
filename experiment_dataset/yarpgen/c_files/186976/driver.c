#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1772604947U;
unsigned long long int var_6 = 576397233468154915ULL;
long long int var_8 = 8874105826781050123LL;
unsigned long long int var_10 = 2314316073006184014ULL;
long long int var_11 = 3041141803591254384LL;
int zero = 0;
short var_12 = (short)-16926;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3198486378U;
_Bool var_15 = (_Bool)1;
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
