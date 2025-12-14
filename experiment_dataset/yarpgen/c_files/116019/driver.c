#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16591;
unsigned short var_1 = (unsigned short)52708;
unsigned short var_4 = (unsigned short)36837;
unsigned short var_6 = (unsigned short)31342;
unsigned short var_8 = (unsigned short)21539;
unsigned short var_9 = (unsigned short)9369;
unsigned short var_10 = (unsigned short)62957;
unsigned short var_13 = (unsigned short)7996;
unsigned short var_15 = (unsigned short)50234;
unsigned short var_16 = (unsigned short)34996;
int zero = 0;
unsigned short var_17 = (unsigned short)16270;
unsigned short var_18 = (unsigned short)5813;
unsigned short var_19 = (unsigned short)31018;
unsigned short var_20 = (unsigned short)21693;
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
