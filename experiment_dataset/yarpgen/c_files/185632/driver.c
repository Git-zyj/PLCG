#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6053687214686701051LL;
unsigned long long int var_1 = 17448028536881856306ULL;
unsigned int var_3 = 170983202U;
unsigned long long int var_4 = 8216320338049895658ULL;
unsigned short var_5 = (unsigned short)8184;
unsigned char var_6 = (unsigned char)132;
unsigned int var_7 = 3587489824U;
unsigned long long int var_8 = 14426504054093910761ULL;
int var_10 = 865584186;
short var_11 = (short)1530;
short var_12 = (short)-25545;
unsigned long long int var_13 = 4155465831913074543ULL;
short var_14 = (short)14348;
short var_15 = (short)-257;
int var_17 = 566551942;
int zero = 0;
signed char var_18 = (signed char)-29;
unsigned char var_19 = (unsigned char)30;
unsigned short var_20 = (unsigned short)26331;
unsigned short var_21 = (unsigned short)2498;
short var_22 = (short)22854;
unsigned int var_23 = 4053517987U;
int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1341005055;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
