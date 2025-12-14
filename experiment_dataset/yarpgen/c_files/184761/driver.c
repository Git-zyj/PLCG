#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2372706266705193752LL;
unsigned short var_4 = (unsigned short)1878;
_Bool var_5 = (_Bool)1;
long long int var_7 = -792936540395224770LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_16 = (short)-29755;
unsigned int var_17 = 3587179072U;
long long int var_18 = 876600742693059852LL;
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
