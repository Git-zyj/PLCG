#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
int var_1 = -2139632613;
unsigned short var_5 = (unsigned short)51698;
int var_8 = 203249877;
unsigned long long int var_11 = 4009584907294539037ULL;
int zero = 0;
int var_15 = -2131060684;
long long int var_16 = -9049384326302923639LL;
unsigned long long int var_17 = 8642236590601200942ULL;
unsigned long long int var_18 = 4657757304012956997ULL;
signed char var_19 = (signed char)-23;
unsigned long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 15526273818877275570ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
