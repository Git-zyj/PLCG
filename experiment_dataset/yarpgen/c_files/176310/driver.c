#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -51653604;
unsigned int var_2 = 1640003996U;
long long int var_4 = 7278241488967888311LL;
int var_6 = -647717640;
unsigned long long int var_8 = 5093623809732147935ULL;
signed char var_9 = (signed char)-82;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -249047360;
unsigned long long int var_13 = 4593850663484207593ULL;
unsigned char var_14 = (unsigned char)152;
unsigned char var_15 = (unsigned char)108;
void init() {
}

void checksum() {
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
