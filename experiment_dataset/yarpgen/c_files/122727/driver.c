#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)904;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-91;
short var_5 = (short)16118;
unsigned short var_13 = (unsigned short)22296;
int zero = 0;
int var_15 = -930195157;
unsigned long long int var_16 = 7632206991105990466ULL;
unsigned short var_17 = (unsigned short)32504;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
