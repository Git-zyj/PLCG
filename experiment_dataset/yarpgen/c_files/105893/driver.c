#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7241017386106525299ULL;
unsigned char var_1 = (unsigned char)168;
unsigned long long int var_2 = 758548088879044970ULL;
unsigned long long int var_3 = 10742206963999209322ULL;
signed char var_5 = (signed char)83;
unsigned long long int var_6 = 10509808505637021618ULL;
signed char var_7 = (signed char)112;
unsigned long long int var_8 = 961023893141012126ULL;
long long int var_9 = 8758979583716443612LL;
unsigned char var_11 = (unsigned char)118;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)8482;
signed char var_15 = (signed char)-5;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
unsigned long long int var_18 = 5791595216294306906ULL;
short var_19 = (short)14320;
unsigned short var_20 = (unsigned short)27028;
unsigned long long int var_21 = 12784207757886222181ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2416854900783401604ULL;
long long int var_24 = -1285127666824533616LL;
unsigned long long int arr_0 [11] ;
short arr_1 [11] ;
long long int arr_2 [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 15064567407036335709ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-23933;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -2102123735210671149LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)217;
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
