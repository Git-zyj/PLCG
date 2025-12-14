#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3255522837389536951LL;
unsigned int var_5 = 1553248400U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-27387;
long long int var_12 = -6344773292677341169LL;
int var_17 = -758784231;
int zero = 0;
short var_20 = (short)-32698;
long long int var_21 = -2936235530562102160LL;
int var_22 = 641783682;
void init() {
}

void checksum() {
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
