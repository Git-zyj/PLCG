#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)614;
short var_1 = (short)-1815;
unsigned short var_2 = (unsigned short)57467;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 9349236311079753464ULL;
unsigned int var_12 = 4219834071U;
int zero = 0;
unsigned int var_13 = 2750751835U;
unsigned long long int var_14 = 13083871400658432343ULL;
void init() {
}

void checksum() {
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
