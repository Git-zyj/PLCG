#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17509199936379463365ULL;
unsigned long long int var_1 = 8205210956931785725ULL;
unsigned int var_4 = 2461204769U;
short var_5 = (short)20393;
short var_8 = (short)9900;
long long int var_9 = -1864353470965529335LL;
int var_10 = 1083423014;
unsigned char var_11 = (unsigned char)181;
signed char var_12 = (signed char)95;
unsigned long long int var_14 = 3229258351225035128ULL;
unsigned int var_16 = 338802480U;
int zero = 0;
unsigned int var_18 = 3582269110U;
unsigned char var_19 = (unsigned char)73;
int var_20 = 276216554;
unsigned short var_21 = (unsigned short)29920;
short var_22 = (short)-15714;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
