#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)514;
unsigned int var_3 = 2429052922U;
long long int var_7 = 1807993015441541340LL;
unsigned long long int var_8 = 6663418290207101400ULL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 15459442169601976450ULL;
int var_16 = 1016565036;
int zero = 0;
unsigned long long int var_18 = 14944907675368713294ULL;
_Bool var_19 = (_Bool)0;
int var_20 = -1916062612;
unsigned long long int var_21 = 16445529614985588933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
