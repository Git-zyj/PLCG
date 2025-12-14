#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44184;
long long int var_2 = 441004399600373020LL;
unsigned short var_3 = (unsigned short)60976;
short var_4 = (short)-9896;
_Bool var_6 = (_Bool)0;
int var_7 = 1090918845;
unsigned int var_8 = 2160304106U;
long long int var_9 = 6594842552654395182LL;
int zero = 0;
long long int var_11 = -1749223477344546481LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
