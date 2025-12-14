#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3970750063U;
unsigned long long int var_3 = 10001031595893155076ULL;
unsigned char var_4 = (unsigned char)14;
signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)105;
short var_7 = (short)-5111;
int var_8 = -1421279310;
unsigned long long int var_9 = 7295244797578011348ULL;
signed char var_11 = (signed char)-68;
long long int var_12 = 1305208976561855607LL;
unsigned int var_13 = 2834191609U;
int zero = 0;
unsigned char var_14 = (unsigned char)224;
signed char var_15 = (signed char)-8;
_Bool var_16 = (_Bool)1;
int var_17 = -851188251;
unsigned long long int var_18 = 11910560262535993508ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
