#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned char var_3 = (unsigned char)161;
long long int var_4 = -1706445108226925836LL;
signed char var_5 = (signed char)-47;
signed char var_6 = (signed char)32;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 1045422704689999857ULL;
_Bool var_16 = (_Bool)0;
long long int var_18 = -7753575962664578796LL;
long long int var_19 = 4070552197266477714LL;
int zero = 0;
long long int var_20 = 8340430253695151659LL;
unsigned int var_21 = 1402713714U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
