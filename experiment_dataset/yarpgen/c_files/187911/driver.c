#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 671242448U;
unsigned int var_3 = 409843997U;
unsigned long long int var_4 = 17840127194702934456ULL;
unsigned long long int var_5 = 7456119094427168380ULL;
unsigned long long int var_6 = 17938325807183038406ULL;
unsigned long long int var_7 = 15307742919859194489ULL;
unsigned long long int var_10 = 4259117315346067418ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 6439124679314568471ULL;
unsigned long long int var_16 = 3598144026480374777ULL;
unsigned long long int var_17 = 8240534858011990723ULL;
int zero = 0;
long long int var_20 = -7089879133097299488LL;
unsigned long long int var_21 = 3578531117499567788ULL;
long long int var_22 = 7469541221363553152LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
