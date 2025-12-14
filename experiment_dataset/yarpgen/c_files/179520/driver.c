#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-82;
long long int var_10 = 7386577952063675084LL;
int var_17 = -925833168;
int zero = 0;
unsigned short var_18 = (unsigned short)27999;
long long int var_19 = -1259369447837917730LL;
unsigned long long int var_20 = 15895672908038884712ULL;
short var_21 = (short)-8024;
int var_22 = -608925415;
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
