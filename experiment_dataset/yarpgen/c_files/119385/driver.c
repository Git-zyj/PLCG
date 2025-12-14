#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 199849794;
unsigned int var_6 = 1864224628U;
short var_7 = (short)2758;
long long int var_11 = -4315174209079263160LL;
signed char var_12 = (signed char)-49;
int zero = 0;
signed char var_13 = (signed char)2;
unsigned int var_14 = 2115827376U;
unsigned int var_15 = 792302721U;
void init() {
}

void checksum() {
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
