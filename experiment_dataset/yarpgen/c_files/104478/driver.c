#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 868251502;
unsigned short var_4 = (unsigned short)29109;
int var_6 = -425611608;
unsigned short var_7 = (unsigned short)63159;
long long int var_8 = 3168372230266779057LL;
short var_9 = (short)1852;
unsigned char var_10 = (unsigned char)35;
long long int var_11 = 5561306146001493342LL;
int zero = 0;
unsigned long long int var_12 = 16466601782377485986ULL;
signed char var_13 = (signed char)-72;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3461855683905472390LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
