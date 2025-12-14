#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
_Bool var_1 = (_Bool)0;
long long int var_3 = -7989359693145532342LL;
unsigned short var_4 = (unsigned short)49822;
unsigned char var_9 = (unsigned char)226;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3765775534U;
unsigned char var_15 = (unsigned char)77;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
unsigned long long int var_20 = 5752045914923056255ULL;
signed char var_21 = (signed char)-12;
unsigned short var_22 = (unsigned short)15266;
signed char var_23 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
