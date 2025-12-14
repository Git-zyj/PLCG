#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 842428325751721718ULL;
int var_9 = -304437835;
signed char var_10 = (signed char)-38;
int zero = 0;
int var_12 = 250810036;
unsigned short var_13 = (unsigned short)63343;
int var_14 = 1840620546;
int var_15 = -1315515411;
int var_16 = -94688399;
signed char var_17 = (signed char)-62;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 5589267209150328701ULL;
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
