#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned int var_2 = 104319625U;
int var_4 = 622103240;
signed char var_5 = (signed char)83;
unsigned short var_6 = (unsigned short)17626;
unsigned int var_9 = 1457640062U;
unsigned long long int var_10 = 1778819378646263762ULL;
_Bool var_11 = (_Bool)0;
int var_15 = 1245069273;
unsigned char var_16 = (unsigned char)241;
int zero = 0;
unsigned char var_18 = (unsigned char)151;
unsigned char var_19 = (unsigned char)36;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
