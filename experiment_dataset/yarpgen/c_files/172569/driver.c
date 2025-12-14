#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned int var_1 = 3414741347U;
long long int var_2 = 9078196210859159805LL;
unsigned short var_3 = (unsigned short)43020;
long long int var_4 = 8707563785473304132LL;
long long int var_5 = 5694892667590952370LL;
long long int var_6 = -6458036777740589702LL;
unsigned short var_8 = (unsigned short)52064;
signed char var_9 = (signed char)-51;
short var_10 = (short)17050;
signed char var_11 = (signed char)-97;
unsigned char var_12 = (unsigned char)155;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)33;
int var_17 = 2109180191;
int zero = 0;
long long int var_18 = -7262352362390677301LL;
short var_19 = (short)32716;
short var_20 = (short)18221;
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
