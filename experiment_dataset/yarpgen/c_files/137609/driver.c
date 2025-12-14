#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1106806891;
long long int var_1 = -3904215004924476851LL;
_Bool var_2 = (_Bool)1;
long long int var_4 = 7307629709093043534LL;
short var_6 = (short)13754;
short var_7 = (short)18517;
unsigned int var_8 = 3415179966U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)10358;
int zero = 0;
unsigned short var_13 = (unsigned short)43791;
long long int var_14 = -7248670934854409369LL;
void init() {
}

void checksum() {
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
