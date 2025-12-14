#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2483111945680436510LL;
_Bool var_1 = (_Bool)1;
int var_4 = 114875628;
_Bool var_6 = (_Bool)0;
short var_14 = (short)8239;
signed char var_16 = (signed char)31;
int zero = 0;
unsigned char var_18 = (unsigned char)159;
unsigned short var_19 = (unsigned short)31826;
long long int var_20 = 1735361821996577534LL;
long long int var_21 = -8342642203757707498LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
