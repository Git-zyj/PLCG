#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16931130623998010588ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 7780479605529141872ULL;
signed char var_5 = (signed char)-66;
_Bool var_6 = (_Bool)1;
int var_7 = 245087106;
long long int var_8 = 2369879858701175001LL;
_Bool var_9 = (_Bool)0;
int var_10 = 1269671818;
int zero = 0;
signed char var_12 = (signed char)18;
long long int var_13 = 5015457320700646371LL;
short var_14 = (short)-20601;
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
