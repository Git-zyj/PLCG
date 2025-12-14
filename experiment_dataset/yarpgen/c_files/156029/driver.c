#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)659;
signed char var_6 = (signed char)-100;
unsigned long long int var_8 = 12182543897557855964ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 14246706443948624706ULL;
unsigned long long int var_13 = 8158997539453740985ULL;
int zero = 0;
unsigned int var_17 = 719304392U;
short var_18 = (short)17512;
long long int var_19 = -6462109771403165511LL;
short var_20 = (short)-32134;
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
