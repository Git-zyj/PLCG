#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
unsigned short var_3 = (unsigned short)54534;
signed char var_5 = (signed char)-4;
unsigned long long int var_7 = 8557927546342653182ULL;
signed char var_11 = (signed char)-68;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)66;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6994041009653683640ULL;
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
