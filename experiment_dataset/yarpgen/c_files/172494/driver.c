#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44799;
unsigned long long int var_3 = 13166236909553518059ULL;
int var_7 = -856994778;
long long int var_8 = 5813381521852097519LL;
unsigned long long int var_10 = 12568093384580255248ULL;
int zero = 0;
int var_12 = 1275519850;
unsigned long long int var_13 = 9861354214016242987ULL;
short var_14 = (short)-18389;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
