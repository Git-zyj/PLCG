#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17634113320865510581ULL;
unsigned long long int var_3 = 17478618780923123898ULL;
unsigned int var_4 = 457653710U;
long long int var_5 = 8271921461542602005LL;
short var_6 = (short)-7270;
unsigned long long int var_9 = 5794378104623112534ULL;
unsigned long long int var_10 = 219425554807906529ULL;
unsigned short var_11 = (unsigned short)29871;
int zero = 0;
long long int var_12 = 5202053260632550150LL;
unsigned int var_13 = 3299867608U;
unsigned long long int var_14 = 17497628841638618241ULL;
long long int var_15 = -6092933695269375882LL;
unsigned long long int var_16 = 16090947506758546267ULL;
unsigned long long int var_17 = 10214705919060427790ULL;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6087917914468831990LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
