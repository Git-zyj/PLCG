#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1137643727;
signed char var_2 = (signed char)-37;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
int var_18 = 1514882462;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16613602799187822162ULL;
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
