#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned char var_1 = (unsigned char)140;
long long int var_2 = 8316800681667637384LL;
signed char var_3 = (signed char)70;
signed char var_4 = (signed char)-126;
long long int var_5 = -5889911099031954463LL;
unsigned long long int var_6 = 4287121801432447589ULL;
unsigned short var_7 = (unsigned short)17504;
int var_8 = -1268254998;
int var_9 = 1555257122;
short var_10 = (short)18758;
signed char var_11 = (signed char)-71;
int zero = 0;
int var_12 = 1500244803;
int var_13 = 1480741703;
int var_14 = 1276849338;
unsigned char var_15 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
