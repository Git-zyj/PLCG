#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3422083711U;
unsigned short var_2 = (unsigned short)57024;
signed char var_6 = (signed char)-26;
signed char var_8 = (signed char)90;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)6;
int var_12 = -407438386;
int zero = 0;
unsigned long long int var_14 = 5863566972184943050ULL;
unsigned long long int var_15 = 15771109152144225044ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
