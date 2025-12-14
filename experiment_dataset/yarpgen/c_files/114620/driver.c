#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16647241663229913543ULL;
short var_2 = (short)-9640;
unsigned int var_5 = 2825512659U;
short var_6 = (short)-27517;
int var_7 = 863711247;
unsigned short var_9 = (unsigned short)57890;
int var_12 = -726168222;
unsigned short var_14 = (unsigned short)19751;
int zero = 0;
short var_17 = (short)25350;
unsigned int var_18 = 2088846843U;
short var_19 = (short)10686;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
