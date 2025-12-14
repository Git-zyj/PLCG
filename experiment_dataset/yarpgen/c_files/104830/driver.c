#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1566209550;
int var_8 = 1436609380;
int var_10 = -1278221221;
unsigned int var_16 = 204873755U;
int zero = 0;
unsigned long long int var_20 = 13615519154535525949ULL;
int var_21 = -895302598;
int var_22 = -16075361;
unsigned char var_23 = (unsigned char)130;
unsigned short var_24 = (unsigned short)25215;
unsigned char var_25 = (unsigned char)209;
unsigned long long int var_26 = 16145496454777397990ULL;
unsigned char var_27 = (unsigned char)74;
unsigned short var_28 = (unsigned short)36168;
long long int var_29 = -7908446213550815099LL;
_Bool var_30 = (_Bool)0;
int var_31 = -1835429848;
unsigned long long int var_32 = 16217954542054875971ULL;
long long int var_33 = -370828424622905745LL;
int var_34 = 1301367088;
unsigned long long int var_35 = 3377564087879525404ULL;
unsigned short var_36 = (unsigned short)27886;
unsigned short var_37 = (unsigned short)59715;
long long int var_38 = 1318938564398889111LL;
int var_39 = -1224995356;
unsigned char var_40 = (unsigned char)73;
unsigned char var_41 = (unsigned char)37;
long long int var_42 = -4204109809925744213LL;
_Bool var_43 = (_Bool)1;
short var_44 = (short)-22658;
unsigned long long int var_45 = 10075801291788362554ULL;
long long int var_46 = -5430945258946716281LL;
unsigned short arr_27 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25696;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
