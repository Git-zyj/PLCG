#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1203540137153379739LL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-10252;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-110;
int var_9 = 520327111;
unsigned long long int var_10 = 2671219445788854014ULL;
int zero = 0;
unsigned long long int var_11 = 14282865988119692302ULL;
unsigned short var_12 = (unsigned short)50975;
signed char var_13 = (signed char)-55;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3481752169U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
