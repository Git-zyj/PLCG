#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5540766151387275984LL;
int var_1 = 1453960068;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 7755902560515517396ULL;
int var_11 = -150675224;
unsigned long long int var_15 = 11572311534881086982ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)54775;
long long int var_20 = 5548049106968698932LL;
long long int var_21 = -4498699346586886993LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
