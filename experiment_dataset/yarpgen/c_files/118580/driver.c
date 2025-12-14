#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -356915087;
unsigned int var_5 = 2611671186U;
unsigned int var_6 = 3654457362U;
int var_10 = -2131136896;
unsigned int var_13 = 4242344248U;
long long int var_14 = -5955395366186891240LL;
int zero = 0;
short var_17 = (short)-31858;
int var_18 = -1746412492;
int var_19 = -539884494;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
