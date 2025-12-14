#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1628342834;
long long int var_12 = -4920387753287391052LL;
unsigned char var_13 = (unsigned char)155;
short var_16 = (short)-11456;
unsigned short var_18 = (unsigned short)30248;
int zero = 0;
short var_19 = (short)18019;
long long int var_20 = 7158704412570101630LL;
unsigned int var_21 = 3202794326U;
unsigned char var_22 = (unsigned char)106;
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
