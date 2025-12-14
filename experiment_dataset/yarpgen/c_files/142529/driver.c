#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3108051277524957115ULL;
unsigned short var_2 = (unsigned short)41642;
short var_3 = (short)14829;
unsigned short var_7 = (unsigned short)46545;
int var_9 = -1822510312;
_Bool var_10 = (_Bool)1;
signed char var_17 = (signed char)-71;
int var_18 = -1071186601;
int zero = 0;
short var_19 = (short)5016;
signed char var_20 = (signed char)35;
unsigned int var_21 = 2204900429U;
unsigned long long int var_22 = 4118373204162586947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
