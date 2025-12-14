#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1183442711;
unsigned long long int var_1 = 13059946771414833342ULL;
int var_2 = 437385853;
unsigned long long int var_5 = 11374835855762713317ULL;
signed char var_7 = (signed char)-104;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 422098174;
unsigned short var_13 = (unsigned short)23926;
int var_14 = -2065266783;
void init() {
}

void checksum() {
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
