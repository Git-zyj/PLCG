#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -107947031;
unsigned char var_1 = (unsigned char)177;
long long int var_2 = -4819738805233407374LL;
long long int var_4 = 3050520816120289295LL;
unsigned char var_5 = (unsigned char)194;
unsigned long long int var_6 = 5286729190316127136ULL;
unsigned short var_7 = (unsigned short)40051;
short var_10 = (short)4893;
signed char var_11 = (signed char)69;
unsigned long long int var_12 = 14054343398261349108ULL;
unsigned char var_13 = (unsigned char)152;
int zero = 0;
int var_15 = 710902150;
long long int var_16 = -1667715140307371036LL;
int var_17 = 901130826;
long long int var_18 = 6943979982748783657LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
