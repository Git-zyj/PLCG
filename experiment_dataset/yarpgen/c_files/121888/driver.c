#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1762616058;
unsigned long long int var_2 = 307688218901334963ULL;
unsigned long long int var_4 = 1301854287491647224ULL;
unsigned long long int var_5 = 17727047231448464553ULL;
unsigned int var_6 = 3810865995U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = 372156512;
unsigned short var_14 = (unsigned short)20030;
short var_15 = (short)-27562;
int var_16 = 232657604;
long long int var_17 = -1668712999609522849LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
