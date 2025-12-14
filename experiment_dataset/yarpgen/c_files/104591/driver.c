#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-125;
long long int var_5 = -438161521626484717LL;
unsigned char var_7 = (unsigned char)164;
unsigned char var_8 = (unsigned char)200;
signed char var_10 = (signed char)-69;
unsigned long long int var_11 = 14545174861071615679ULL;
unsigned long long int var_12 = 10997738723781625220ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3390210858U;
int zero = 0;
unsigned short var_18 = (unsigned short)19515;
_Bool var_19 = (_Bool)0;
int var_20 = -1813318547;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)201;
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
