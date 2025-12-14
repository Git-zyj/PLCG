#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1020725543;
unsigned long long int var_8 = 12904049551756965365ULL;
long long int var_9 = -1200541118513552527LL;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
short var_13 = (short)16772;
unsigned short var_14 = (unsigned short)43347;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
