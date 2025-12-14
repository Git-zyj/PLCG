#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8826306290263488562ULL;
unsigned long long int var_2 = 7426538339563565866ULL;
_Bool var_5 = (_Bool)1;
int var_7 = -1728540550;
unsigned int var_8 = 2686504602U;
unsigned int var_10 = 1129635946U;
int zero = 0;
short var_12 = (short)18408;
unsigned int var_13 = 809691873U;
unsigned short var_14 = (unsigned short)62482;
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
