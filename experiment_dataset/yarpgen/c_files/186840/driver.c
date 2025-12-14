#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3420740542910096285ULL;
unsigned char var_6 = (unsigned char)125;
unsigned char var_7 = (unsigned char)103;
short var_8 = (short)29368;
unsigned long long int var_10 = 15538927164995730316ULL;
long long int var_12 = 226090017291200208LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)16607;
unsigned long long int var_16 = 12056621688559810020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
