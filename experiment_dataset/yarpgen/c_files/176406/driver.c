#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1883402755U;
int var_1 = -1524785498;
unsigned short var_2 = (unsigned short)20127;
unsigned char var_5 = (unsigned char)190;
signed char var_6 = (signed char)40;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 380160305U;
unsigned char var_9 = (unsigned char)207;
unsigned short var_10 = (unsigned short)10981;
int zero = 0;
unsigned long long int var_11 = 7922710311645226349ULL;
int var_12 = -1377547445;
unsigned long long int var_13 = 6317747782408020290ULL;
unsigned long long int var_14 = 6654660868909428134ULL;
unsigned int var_15 = 545886184U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
