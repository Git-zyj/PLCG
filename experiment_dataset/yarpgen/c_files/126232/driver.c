#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3677425080U;
unsigned char var_4 = (unsigned char)197;
unsigned char var_5 = (unsigned char)136;
unsigned short var_6 = (unsigned short)9433;
long long int var_7 = -1242642887053000364LL;
unsigned int var_9 = 3846211121U;
short var_10 = (short)8372;
unsigned int var_12 = 1510416509U;
int var_15 = -1184437315;
int zero = 0;
long long int var_16 = -1390805567264435928LL;
int var_17 = -378605168;
unsigned char var_18 = (unsigned char)4;
long long int var_19 = -9042634968800036526LL;
unsigned long long int var_20 = 9112307999289570805ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
