#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1957319659;
_Bool var_2 = (_Bool)1;
int var_4 = 764375572;
unsigned char var_5 = (unsigned char)7;
unsigned long long int var_6 = 3008213913202769461ULL;
unsigned char var_7 = (unsigned char)203;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 352446544956316964ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6665930588016305657LL;
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
