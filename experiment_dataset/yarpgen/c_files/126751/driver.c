#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6906431692518666742LL;
unsigned long long int var_4 = 5770019456004966099ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 1360470556;
unsigned long long int var_8 = 7742527362515005550ULL;
unsigned long long int var_9 = 15483152947554365742ULL;
signed char var_11 = (signed char)115;
short var_12 = (short)-7849;
signed char var_13 = (signed char)42;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 6611056710963529970LL;
void init() {
}

void checksum() {
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
