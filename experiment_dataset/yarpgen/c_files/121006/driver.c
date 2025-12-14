#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2843;
long long int var_1 = 9209321340677320398LL;
short var_3 = (short)-2232;
long long int var_4 = -7524493841060128761LL;
int var_6 = 1981695003;
signed char var_7 = (signed char)-9;
long long int var_9 = 2223431911614078324LL;
unsigned short var_11 = (unsigned short)24643;
long long int var_12 = -6686020950752050340LL;
signed char var_13 = (signed char)-10;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
unsigned char var_15 = (unsigned char)61;
unsigned char var_16 = (unsigned char)109;
unsigned short var_17 = (unsigned short)62884;
unsigned int var_18 = 1374555885U;
long long int var_19 = 6379301232897497687LL;
signed char var_20 = (signed char)50;
unsigned short var_21 = (unsigned short)62221;
unsigned char var_22 = (unsigned char)2;
unsigned long long int var_23 = 9295585181464033330ULL;
long long int var_24 = 8750543867190420587LL;
signed char var_25 = (signed char)21;
unsigned long long int var_26 = 10898084576482678907ULL;
long long int var_27 = 3065080269721782040LL;
unsigned char var_28 = (unsigned char)97;
long long int var_29 = 2137081410749868236LL;
unsigned char var_30 = (unsigned char)157;
long long int var_31 = 7625611337597032651LL;
signed char var_32 = (signed char)52;
unsigned char var_33 = (unsigned char)206;
short var_34 = (short)-29081;
signed char var_35 = (signed char)-11;
long long int var_36 = -529517159348179982LL;
signed char var_37 = (signed char)29;
long long int var_38 = -5932673720750589359LL;
long long int var_39 = -4338584274828647982LL;
long long int var_40 = -6735222587039388770LL;
unsigned char var_41 = (unsigned char)57;
short var_42 = (short)18108;
long long int var_43 = 5892198146104986932LL;
long long int var_44 = 3613092576417881350LL;
short var_45 = (short)-353;
short var_46 = (short)1818;
unsigned int var_47 = 2316675949U;
signed char var_48 = (signed char)-36;
unsigned int var_49 = 3164214651U;
long long int var_50 = -7237171767043545340LL;
signed char var_51 = (signed char)116;
long long int var_52 = 6711507994265169266LL;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned int arr_3 [24] [24] [24] ;
signed char arr_4 [24] [24] ;
unsigned int arr_5 [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
signed char arr_7 [24] [24] [24] ;
long long int arr_8 [24] [24] [24] ;
unsigned char arr_10 [20] ;
long long int arr_11 [20] ;
unsigned int arr_13 [20] [20] [20] ;
unsigned char arr_14 [20] [20] [20] ;
long long int arr_15 [20] ;
int arr_17 [20] [20] [20] ;
unsigned short arr_18 [20] [20] ;
signed char arr_19 [20] ;
unsigned int arr_20 [20] [20] [20] ;
unsigned long long int arr_22 [20] [20] [20] [20] ;
long long int arr_23 [20] [20] ;
long long int arr_25 [20] [20] [20] [20] ;
unsigned char arr_28 [25] ;
unsigned char arr_29 [25] ;
unsigned long long int arr_33 [25] ;
long long int arr_37 [25] [25] [25] ;
unsigned long long int arr_41 [25] [25] [25] ;
int arr_43 [25] [25] [25] [25] [25] ;
long long int arr_44 [25] [25] [25] [25] [25] [25] [25] ;
int arr_9 [24] ;
unsigned long long int arr_16 [20] ;
signed char arr_26 [20] [20] ;
short arr_27 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7719842751558398545LL : 8999182340267075955LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 17714204994460151222ULL : 6216944067075391776ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3882355098U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1861280011U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12166100342050593099ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-77 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8657121107572702684LL : -7861393229545036173LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -8943898229033275533LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3925652516U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -1155732171944190253LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1950237517;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)4386;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3520039089U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 4068075576654185383ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = 2766601271980595927LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 2693138591848270373LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = 1732739815485046475ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 257237876944872828LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 5433876669430920255ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = 1602358407;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -7788740961073928143LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 205706583 : -477866766;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 8154492466738987191ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-30539;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
