#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7753143526698544477ULL;
int var_3 = 1160103608;
unsigned char var_6 = (unsigned char)131;
unsigned int var_7 = 939225229U;
unsigned char var_10 = (unsigned char)168;
long long int var_11 = -8405976315734429839LL;
unsigned int var_14 = 1105984505U;
short var_15 = (short)7778;
short var_18 = (short)-7991;
int zero = 0;
signed char var_19 = (signed char)15;
unsigned long long int var_20 = 6711730979987302046ULL;
short var_21 = (short)6787;
long long int var_22 = 654253531078498970LL;
void init() {
}

void checksum() {
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
