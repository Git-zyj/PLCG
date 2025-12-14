#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2434091239193291243ULL;
int var_5 = -1248191739;
unsigned short var_7 = (unsigned short)568;
unsigned long long int var_8 = 1952950223032405826ULL;
_Bool var_10 = (_Bool)0;
int var_18 = -181251103;
int zero = 0;
unsigned int var_19 = 1234524464U;
signed char var_20 = (signed char)-37;
signed char var_21 = (signed char)124;
unsigned short var_22 = (unsigned short)56960;
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
