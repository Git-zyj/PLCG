#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -864872847;
short var_1 = (short)66;
short var_2 = (short)-16867;
unsigned long long int var_5 = 10389211533663098500ULL;
signed char var_6 = (signed char)-44;
int var_11 = -371007790;
long long int var_12 = 4799573426325389LL;
unsigned long long int var_13 = 3170143385544601653ULL;
unsigned int var_15 = 1390308256U;
int var_17 = -682980753;
int zero = 0;
int var_18 = 510248190;
unsigned long long int var_19 = 13838711303819508179ULL;
unsigned int var_20 = 2848221542U;
signed char var_21 = (signed char)111;
long long int var_22 = -1722267998904664634LL;
unsigned char var_23 = (unsigned char)11;
unsigned long long int var_24 = 7627205200252170619ULL;
int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1466759677;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
