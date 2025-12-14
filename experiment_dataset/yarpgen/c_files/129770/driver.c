#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1093012251;
unsigned char var_5 = (unsigned char)180;
unsigned short var_10 = (unsigned short)46447;
int zero = 0;
unsigned long long int var_11 = 17298857294041954591ULL;
unsigned long long int var_12 = 14030570580107059435ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)51;
int var_15 = 153856698;
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
