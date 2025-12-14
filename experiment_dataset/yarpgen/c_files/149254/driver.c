#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8310646295877877256LL;
long long int var_7 = 717398130758470970LL;
signed char var_8 = (signed char)26;
unsigned short var_12 = (unsigned short)18075;
signed char var_13 = (signed char)-71;
int zero = 0;
long long int var_16 = -7148494987972960989LL;
unsigned long long int var_17 = 1764483361322621948ULL;
long long int var_18 = 3955503597598723759LL;
unsigned short var_19 = (unsigned short)11824;
long long int var_20 = 3816993258519810718LL;
signed char var_21 = (signed char)101;
unsigned long long int arr_1 [21] ;
signed char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 15029088000962697721ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-73;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
