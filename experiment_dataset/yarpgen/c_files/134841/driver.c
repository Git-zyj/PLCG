#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2421875784818954659ULL;
unsigned short var_1 = (unsigned short)36609;
unsigned short var_4 = (unsigned short)19810;
signed char var_5 = (signed char)108;
unsigned long long int var_7 = 16033900455147949539ULL;
short var_9 = (short)22032;
long long int var_13 = -1436741662331011945LL;
unsigned long long int var_14 = 10648437076994967268ULL;
int zero = 0;
long long int var_16 = 8255647817110542696LL;
unsigned char var_17 = (unsigned char)115;
short var_18 = (short)13004;
unsigned long long int var_19 = 10053412953796091051ULL;
long long int var_20 = -2453003371309740717LL;
unsigned char var_21 = (unsigned char)239;
unsigned int var_22 = 1130519568U;
long long int var_23 = -173071034815157838LL;
unsigned long long int arr_1 [17] [17] ;
long long int arr_4 [17] [17] ;
long long int arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 9290049888647574307ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -9204199820387238945LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 8694074062433056735LL : 5184649967506251512LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
