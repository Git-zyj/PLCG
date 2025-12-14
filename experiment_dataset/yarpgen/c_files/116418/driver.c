#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
int var_2 = 702602844;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 1955351330U;
short var_9 = (short)-32047;
int zero = 0;
long long int var_11 = -5969624684053831864LL;
unsigned int var_12 = 2719546676U;
unsigned char var_13 = (unsigned char)70;
int var_14 = -1935013360;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
