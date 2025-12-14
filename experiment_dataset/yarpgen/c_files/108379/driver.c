#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 59821248;
unsigned long long int var_5 = 895304646591087229ULL;
unsigned long long int var_7 = 4821423968387051099ULL;
unsigned short var_8 = (unsigned short)14293;
signed char var_10 = (signed char)-32;
long long int var_12 = -4754810213973282329LL;
unsigned short var_17 = (unsigned short)63024;
int zero = 0;
unsigned long long int var_18 = 4298082555514791763ULL;
unsigned char var_19 = (unsigned char)49;
unsigned short var_20 = (unsigned short)41452;
unsigned short var_21 = (unsigned short)38793;
unsigned short var_22 = (unsigned short)59111;
signed char var_23 = (signed char)104;
unsigned int var_24 = 960792313U;
long long int arr_8 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -389373565704080772LL;
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
