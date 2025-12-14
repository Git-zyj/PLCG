#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11972468142977774554ULL;
unsigned char var_2 = (unsigned char)140;
unsigned char var_4 = (unsigned char)34;
long long int var_5 = -5406889696576585913LL;
short var_6 = (short)-10947;
unsigned short var_8 = (unsigned short)20940;
_Bool var_9 = (_Bool)1;
int var_11 = 120372217;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
unsigned char var_14 = (unsigned char)154;
unsigned short var_15 = (unsigned short)59197;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
