#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13294718047208055993ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)30;
signed char var_5 = (signed char)90;
short var_7 = (short)-2434;
unsigned char var_8 = (unsigned char)24;
signed char var_9 = (signed char)-110;
short var_12 = (short)9837;
unsigned long long int var_13 = 17069372514457772826ULL;
signed char var_14 = (signed char)-90;
signed char var_16 = (signed char)125;
unsigned char var_19 = (unsigned char)147;
int zero = 0;
short var_20 = (short)28886;
unsigned char var_21 = (unsigned char)120;
unsigned long long int var_22 = 4764516162606935716ULL;
unsigned long long int var_23 = 17531142881267109901ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
