#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 378596003U;
unsigned int var_5 = 1287571869U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)61421;
int zero = 0;
signed char var_11 = (signed char)-123;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17592914088182308914ULL;
unsigned int var_14 = 3095815195U;
unsigned int var_15 = 444315753U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
