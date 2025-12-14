#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
short var_2 = (short)27168;
short var_3 = (short)-1852;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 5015058977243078473ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-72;
unsigned int var_11 = 1032936689U;
int zero = 0;
unsigned short var_12 = (unsigned short)52870;
long long int var_13 = 1583644663488302069LL;
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
