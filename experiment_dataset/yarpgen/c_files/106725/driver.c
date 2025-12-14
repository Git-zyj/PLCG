#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12106;
unsigned int var_1 = 1214341968U;
long long int var_2 = -6722471634817869341LL;
signed char var_3 = (signed char)-35;
signed char var_4 = (signed char)4;
unsigned short var_6 = (unsigned short)22216;
unsigned char var_7 = (unsigned char)176;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_12 = -6733108482155721485LL;
signed char var_13 = (signed char)-66;
signed char var_14 = (signed char)-48;
signed char var_15 = (signed char)-69;
int zero = 0;
long long int var_16 = -5657955741499454542LL;
unsigned char var_17 = (unsigned char)206;
unsigned char var_18 = (unsigned char)65;
void init() {
}

void checksum() {
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
