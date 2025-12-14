#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21600;
int var_5 = -428825288;
unsigned short var_6 = (unsigned short)46886;
unsigned int var_9 = 2074500822U;
_Bool var_12 = (_Bool)1;
short var_15 = (short)2056;
int zero = 0;
short var_19 = (short)-20195;
short var_20 = (short)17169;
void init() {
}

void checksum() {
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
