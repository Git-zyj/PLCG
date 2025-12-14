#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10356;
unsigned short var_3 = (unsigned short)8717;
int var_5 = -1850628936;
long long int var_6 = 5928492024096189859LL;
unsigned long long int var_9 = 1630560275652498346ULL;
int zero = 0;
unsigned int var_12 = 3054774104U;
int var_13 = -1872218419;
void init() {
}

void checksum() {
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
