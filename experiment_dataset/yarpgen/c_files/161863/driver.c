#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13944836738222572212ULL;
int var_3 = -378859974;
unsigned char var_4 = (unsigned char)193;
unsigned int var_11 = 1547541113U;
int var_12 = 716415827;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)49688;
short var_17 = (short)-12698;
int var_18 = -424082342;
unsigned long long int var_19 = 2960271082707741408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
