#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_6 = (short)-9951;
short var_7 = (short)16723;
long long int var_8 = 1884846447248020655LL;
long long int var_11 = 1586361736614867513LL;
long long int var_13 = 3852172902682758975LL;
unsigned long long int var_16 = 5633096594959520427ULL;
unsigned char var_17 = (unsigned char)241;
int zero = 0;
unsigned long long int var_20 = 895081013624979358ULL;
long long int var_21 = 2749144307033058760LL;
unsigned long long int var_22 = 9298432094658233347ULL;
unsigned char var_23 = (unsigned char)190;
short var_24 = (short)3445;
unsigned long long int var_25 = 3182822688983118589ULL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)75;
_Bool arr_1 [25] [25] ;
short arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (short)19557;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
