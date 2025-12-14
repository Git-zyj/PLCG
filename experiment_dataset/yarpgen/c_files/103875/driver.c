#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1418829616;
signed char var_2 = (signed char)69;
unsigned short var_7 = (unsigned short)33362;
unsigned short var_8 = (unsigned short)62994;
unsigned long long int var_10 = 1202515857646303535ULL;
int var_13 = -1717918021;
int zero = 0;
long long int var_17 = 6345867150810345965LL;
unsigned short var_18 = (unsigned short)55838;
signed char var_19 = (signed char)89;
signed char var_20 = (signed char)-11;
long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -5185978339682895432LL : 227696789165631042LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
