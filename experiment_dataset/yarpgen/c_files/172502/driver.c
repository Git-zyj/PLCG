#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13798;
long long int var_1 = -2444277932289974772LL;
unsigned char var_4 = (unsigned char)221;
unsigned long long int var_7 = 11779085543132233907ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)249;
unsigned char var_12 = (unsigned char)12;
long long int var_13 = -9040043719994960827LL;
long long int var_14 = 7882892163778201513LL;
int var_15 = -801495423;
int var_16 = -41200688;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
