#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5770;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1891114652U;
unsigned int var_6 = 158202975U;
short var_7 = (short)32555;
short var_8 = (short)6796;
int var_10 = -1041003879;
unsigned short var_11 = (unsigned short)23515;
unsigned int var_13 = 2331857392U;
unsigned int var_14 = 2410235143U;
int zero = 0;
unsigned short var_15 = (unsigned short)50913;
int var_16 = 1809685324;
long long int var_17 = -175072867337908498LL;
void init() {
}

void checksum() {
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
