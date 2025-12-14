#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -194112692872143633LL;
unsigned short var_1 = (unsigned short)58269;
unsigned char var_2 = (unsigned char)81;
unsigned char var_3 = (unsigned char)166;
signed char var_4 = (signed char)104;
unsigned char var_5 = (unsigned char)63;
unsigned long long int var_6 = 9702990092288751667ULL;
unsigned short var_8 = (unsigned short)34797;
signed char var_9 = (signed char)-96;
signed char var_10 = (signed char)-89;
int zero = 0;
long long int var_11 = -6344825883104327805LL;
unsigned short var_12 = (unsigned short)60206;
long long int var_13 = -4328722374341184064LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
