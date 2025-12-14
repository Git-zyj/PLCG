#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2314;
unsigned long long int var_5 = 1279097249845437352ULL;
unsigned short var_6 = (unsigned short)40195;
unsigned long long int var_7 = 15175476298338074206ULL;
unsigned long long int var_9 = 1342938789684206026ULL;
short var_14 = (short)-25420;
unsigned short var_17 = (unsigned short)46230;
unsigned int var_18 = 3804147748U;
int zero = 0;
signed char var_19 = (signed char)102;
unsigned long long int var_20 = 5849828503122935410ULL;
int var_21 = -689378288;
void init() {
}

void checksum() {
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
