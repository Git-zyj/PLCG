#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1932974290;
long long int var_2 = 781130171995629681LL;
unsigned short var_4 = (unsigned short)56851;
int var_5 = -1504446778;
unsigned short var_8 = (unsigned short)6322;
unsigned char var_9 = (unsigned char)26;
short var_10 = (short)8354;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-5330;
long long int var_13 = 4299900727733925885LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
