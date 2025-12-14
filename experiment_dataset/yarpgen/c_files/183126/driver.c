#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6434526677674771395LL;
unsigned char var_1 = (unsigned char)209;
unsigned short var_3 = (unsigned short)24319;
unsigned int var_5 = 1555109783U;
long long int var_7 = -5416889425414046980LL;
unsigned long long int var_8 = 14359008026912356797ULL;
unsigned long long int var_10 = 6784604666069251951ULL;
long long int var_11 = 7559397151663436317LL;
int zero = 0;
unsigned int var_17 = 3570443674U;
unsigned char var_18 = (unsigned char)101;
unsigned short var_19 = (unsigned short)10126;
long long int var_20 = -6378892424298716054LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
