#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8285692963120268457ULL;
unsigned long long int var_6 = 5466482551100197356ULL;
unsigned long long int var_8 = 7843394426542433504ULL;
unsigned long long int var_12 = 17435970043460301185ULL;
unsigned long long int var_13 = 4210047706271495850ULL;
unsigned long long int var_14 = 4924426188348209539ULL;
unsigned long long int var_16 = 12535377462784111608ULL;
int zero = 0;
unsigned long long int var_19 = 12916725395067629161ULL;
unsigned long long int var_20 = 11479343588504959940ULL;
unsigned long long int var_21 = 13801032893717691793ULL;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 17901136745485642067ULL : 708788374509670908ULL;
}

void checksum() {
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
