#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
_Bool var_1 = (_Bool)0;
short var_2 = (short)31879;
unsigned char var_3 = (unsigned char)9;
unsigned long long int var_4 = 7434177929385267531ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)105;
unsigned long long int var_16 = 8259063951543562309ULL;
int zero = 0;
unsigned long long int var_20 = 14275923653255265895ULL;
unsigned long long int var_21 = 7389875776119331834ULL;
unsigned short var_22 = (unsigned short)33512;
unsigned long long int var_23 = 13226641246297570695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
