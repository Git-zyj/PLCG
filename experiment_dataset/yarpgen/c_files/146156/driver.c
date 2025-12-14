#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_1 = -48777191;
int var_2 = 1352331373;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1733331230U;
signed char var_5 = (signed char)-74;
int var_6 = 991556185;
long long int var_7 = -7881740574829987489LL;
unsigned short var_8 = (unsigned short)46935;
unsigned long long int var_11 = 17397787630513557035ULL;
unsigned short var_12 = (unsigned short)16532;
int zero = 0;
unsigned long long int var_18 = 369395004990819503ULL;
long long int var_19 = 8536205321509542587LL;
unsigned char var_20 = (unsigned char)121;
unsigned short var_21 = (unsigned short)48193;
short var_22 = (short)-13092;
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
