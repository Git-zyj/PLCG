#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)17;
unsigned long long int var_13 = 10116356108832654043ULL;
unsigned short var_17 = (unsigned short)10669;
long long int var_18 = -4050105624691767257LL;
int zero = 0;
unsigned short var_20 = (unsigned short)21185;
signed char var_21 = (signed char)-46;
unsigned short var_22 = (unsigned short)25649;
unsigned short var_23 = (unsigned short)42540;
long long int var_24 = -3478262523508207178LL;
long long int var_25 = 5904766768775369038LL;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 12549581079834696164ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
