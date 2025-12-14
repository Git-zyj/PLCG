#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-50;
unsigned long long int var_4 = 1820537826205802024ULL;
unsigned char var_6 = (unsigned char)137;
unsigned char var_7 = (unsigned char)193;
long long int var_8 = -8790163025578750706LL;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
signed char var_13 = (signed char)-102;
_Bool var_14 = (_Bool)1;
int var_15 = 902866962;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
