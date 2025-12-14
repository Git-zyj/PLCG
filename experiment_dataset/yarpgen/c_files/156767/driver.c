#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_4 = -1049503330;
unsigned int var_5 = 104881503U;
unsigned short var_6 = (unsigned short)9934;
long long int var_7 = -5895403432466435107LL;
unsigned int var_8 = 1980212130U;
long long int var_9 = 5537687579425844144LL;
int zero = 0;
unsigned long long int var_11 = 6934521348379997915ULL;
int var_12 = -2061067950;
unsigned short var_13 = (unsigned short)19115;
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
