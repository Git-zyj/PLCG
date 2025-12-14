#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1416626296;
unsigned long long int var_6 = 8886021667514828411ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1201827555372614637ULL;
unsigned short var_20 = (unsigned short)51216;
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
