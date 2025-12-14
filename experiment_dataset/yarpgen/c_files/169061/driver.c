#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 80879101;
int var_4 = -483589886;
signed char var_7 = (signed char)-67;
int var_10 = 1823519474;
_Bool var_11 = (_Bool)0;
int var_13 = 1156812632;
unsigned long long int var_16 = 17431164428349863346ULL;
int zero = 0;
int var_17 = -1797626411;
int var_18 = 106124211;
long long int var_19 = 8229855695939642515LL;
long long int var_20 = 2777105092267688440LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
