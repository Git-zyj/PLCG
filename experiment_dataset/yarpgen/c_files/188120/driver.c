#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-31043;
long long int var_7 = -2794723657227705574LL;
long long int var_11 = -7374813383961509276LL;
unsigned int var_13 = 1877677756U;
unsigned int var_17 = 3665513671U;
int zero = 0;
long long int var_18 = -5977801512560789194LL;
long long int var_19 = 6829028426083650731LL;
long long int var_20 = -189848238002739733LL;
void init() {
}

void checksum() {
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
