#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
unsigned long long int var_4 = 7039970362015239617ULL;
unsigned long long int var_5 = 4335566456601923657ULL;
signed char var_6 = (signed char)25;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2189310075U;
short var_11 = (short)-21418;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)39003;
unsigned long long int var_14 = 4013611462450208987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
