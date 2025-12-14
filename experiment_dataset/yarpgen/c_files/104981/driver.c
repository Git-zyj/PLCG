#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4404033187818156340LL;
unsigned int var_2 = 3841200283U;
signed char var_5 = (signed char)-110;
unsigned int var_6 = 3404819106U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)11207;
long long int var_10 = -2297887211946517660LL;
unsigned long long int var_11 = 13959313479934096410ULL;
int zero = 0;
short var_12 = (short)-27279;
unsigned int var_13 = 2976696584U;
short var_14 = (short)-17251;
unsigned int var_15 = 3011648047U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
