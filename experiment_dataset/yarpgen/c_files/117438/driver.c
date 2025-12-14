#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14019303636940751915ULL;
signed char var_2 = (signed char)-2;
unsigned char var_3 = (unsigned char)181;
unsigned short var_6 = (unsigned short)53965;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 73037011U;
unsigned char var_13 = (unsigned char)139;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
