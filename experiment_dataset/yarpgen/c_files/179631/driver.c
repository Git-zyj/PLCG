#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
signed char var_3 = (signed char)68;
short var_4 = (short)-27939;
unsigned long long int var_6 = 8256025958758353150ULL;
unsigned short var_7 = (unsigned short)19420;
unsigned short var_8 = (unsigned short)1572;
int zero = 0;
short var_10 = (short)-22621;
short var_11 = (short)9911;
int var_12 = -1282003678;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4266956858U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
