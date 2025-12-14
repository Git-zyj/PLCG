#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1463728987;
long long int var_4 = 2399760944195834147LL;
short var_5 = (short)5553;
int var_6 = -1399669018;
unsigned short var_9 = (unsigned short)5715;
unsigned short var_10 = (unsigned short)44124;
unsigned int var_13 = 973136736U;
unsigned long long int var_15 = 6870175127309715127ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)20168;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5686383289158965080LL;
unsigned long long int var_20 = 3131888773166538058ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1575886532U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
