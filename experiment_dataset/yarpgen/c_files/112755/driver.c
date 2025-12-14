#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned char var_2 = (unsigned char)158;
int var_4 = -892488719;
unsigned long long int var_5 = 17245959721801668163ULL;
unsigned long long int var_7 = 17328960026293114255ULL;
_Bool var_9 = (_Bool)1;
int var_11 = -1281199571;
unsigned long long int var_12 = 16747669446178759928ULL;
signed char var_13 = (signed char)26;
int var_14 = -1000032383;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)11;
signed char var_19 = (signed char)-38;
unsigned char var_20 = (unsigned char)196;
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
