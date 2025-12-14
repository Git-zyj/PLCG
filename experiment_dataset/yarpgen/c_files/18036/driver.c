#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)94;
long long int var_4 = -7818581604790111739LL;
unsigned long long int var_6 = 15490044898986869565ULL;
long long int var_7 = 7198013497698757687LL;
long long int var_13 = 7534628012636955869LL;
unsigned long long int var_17 = 5780491201533191058ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
long long int var_19 = 4460284326954185750LL;
unsigned short var_20 = (unsigned short)8111;
unsigned char var_21 = (unsigned char)98;
unsigned long long int var_22 = 10384402395549742685ULL;
unsigned short arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62091 : (unsigned short)10072;
}

void checksum() {
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
