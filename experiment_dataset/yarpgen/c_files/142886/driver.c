#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -960655567;
long long int var_2 = 2366404794079928874LL;
unsigned long long int var_3 = 9033146697055635333ULL;
short var_5 = (short)-954;
short var_8 = (short)13026;
long long int var_14 = 4626501816662009766LL;
int var_18 = -329482348;
int zero = 0;
unsigned char var_19 = (unsigned char)235;
unsigned char var_20 = (unsigned char)66;
int var_21 = -1088192482;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
