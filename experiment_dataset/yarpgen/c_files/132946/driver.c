#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1348022557;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = 1098058300;
int var_9 = 1464062452;
int zero = 0;
signed char var_11 = (signed char)37;
int var_12 = 1984662846;
unsigned char var_13 = (unsigned char)250;
unsigned long long int var_14 = 14900966005203498575ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
