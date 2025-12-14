#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 75038313U;
unsigned char var_3 = (unsigned char)222;
int var_4 = -782712137;
unsigned short var_5 = (unsigned short)44828;
long long int var_7 = 4237408245674785590LL;
unsigned char var_9 = (unsigned char)153;
int var_13 = -1163919295;
unsigned int var_14 = 1436377484U;
unsigned long long int var_17 = 17908615981494609999ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)25107;
unsigned long long int var_20 = 4015482900043707242ULL;
unsigned int var_21 = 3276446590U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
