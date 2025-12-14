#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
signed char var_2 = (signed char)23;
unsigned int var_3 = 215316491U;
_Bool var_4 = (_Bool)1;
long long int var_6 = 8536103545654596469LL;
long long int var_7 = -1688868890579220698LL;
long long int var_8 = 2208174467875714077LL;
signed char var_10 = (signed char)-19;
int zero = 0;
long long int var_11 = 7791496389270894236LL;
unsigned int var_12 = 3889333469U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
