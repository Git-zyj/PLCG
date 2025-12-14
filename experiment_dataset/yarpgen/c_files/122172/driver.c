#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8456038720464505727LL;
unsigned int var_4 = 4227612364U;
short var_5 = (short)-5721;
long long int var_6 = 2435198315942875171LL;
short var_7 = (short)-9355;
signed char var_8 = (signed char)30;
signed char var_9 = (signed char)33;
int var_10 = -1771280793;
int zero = 0;
long long int var_11 = 2564150167460556412LL;
unsigned int var_12 = 705037097U;
unsigned short var_13 = (unsigned short)40364;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
