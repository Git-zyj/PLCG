#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -2076089151;
int var_7 = 1118871156;
unsigned int var_8 = 3314899640U;
int var_9 = 618185115;
unsigned int var_10 = 1562428229U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1207091413U;
short var_14 = (short)-22826;
unsigned int var_15 = 3225728820U;
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
