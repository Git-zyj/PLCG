#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3885930912131670475LL;
long long int var_2 = -6177485659649105237LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)7622;
unsigned char var_7 = (unsigned char)152;
unsigned short var_8 = (unsigned short)44326;
long long int var_13 = 5508485031794528475LL;
int zero = 0;
unsigned char var_18 = (unsigned char)192;
unsigned char var_19 = (unsigned char)98;
unsigned char var_20 = (unsigned char)164;
unsigned short var_21 = (unsigned short)32530;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
