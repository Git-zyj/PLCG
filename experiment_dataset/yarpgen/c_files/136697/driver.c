#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1600618464425672583LL;
unsigned int var_1 = 2816204454U;
unsigned short var_3 = (unsigned short)44739;
_Bool var_5 = (_Bool)1;
int var_7 = -1395458985;
unsigned short var_9 = (unsigned short)3387;
short var_10 = (short)-16440;
int zero = 0;
short var_11 = (short)-13621;
short var_12 = (short)-27576;
_Bool var_13 = (_Bool)1;
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
