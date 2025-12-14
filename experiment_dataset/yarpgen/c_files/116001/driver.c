#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10491;
short var_2 = (short)10441;
unsigned long long int var_3 = 11878867738930164930ULL;
unsigned long long int var_4 = 8156754853754161971ULL;
int var_11 = 2088312357;
int zero = 0;
int var_17 = -415326183;
unsigned short var_18 = (unsigned short)51153;
unsigned long long int var_19 = 2186129877874031647ULL;
unsigned short var_20 = (unsigned short)9167;
unsigned long long int var_21 = 11696694520537286151ULL;
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
