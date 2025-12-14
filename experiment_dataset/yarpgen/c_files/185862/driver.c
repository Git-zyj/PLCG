#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1885073573;
short var_1 = (short)-10704;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)22205;
int var_5 = -260426475;
short var_7 = (short)-27912;
int var_8 = -2082301497;
short var_9 = (short)-8693;
int zero = 0;
unsigned short var_10 = (unsigned short)63817;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-29481;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
