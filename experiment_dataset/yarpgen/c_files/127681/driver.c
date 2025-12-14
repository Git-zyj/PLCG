#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18425749471256740114ULL;
unsigned int var_3 = 1748845800U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 675028615270121551ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1147165488371350403ULL;
signed char var_19 = (signed char)-82;
short var_20 = (short)28398;
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
