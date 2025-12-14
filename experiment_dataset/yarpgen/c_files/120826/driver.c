#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2280485313U;
long long int var_1 = 3720270599834277627LL;
signed char var_4 = (signed char)98;
long long int var_5 = -4386368775389289907LL;
unsigned short var_11 = (unsigned short)40534;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
unsigned short var_15 = (unsigned short)22504;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3299338279U;
signed char var_18 = (signed char)44;
unsigned int var_19 = 2851030703U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
