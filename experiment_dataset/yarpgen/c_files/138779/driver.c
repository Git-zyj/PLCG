#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7352;
short var_3 = (short)-32336;
unsigned long long int var_4 = 3822867568197353912ULL;
short var_5 = (short)-20196;
unsigned int var_6 = 3508593432U;
short var_7 = (short)17571;
unsigned int var_9 = 563322582U;
unsigned long long int var_10 = 5596444369193374735ULL;
unsigned long long int var_11 = 82645190798219515ULL;
unsigned long long int var_12 = 16278163267087266440ULL;
unsigned long long int var_13 = 12423313350152234762ULL;
unsigned long long int var_14 = 13890924004738011460ULL;
short var_15 = (short)7346;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16800294783730666626ULL;
int zero = 0;
short var_18 = (short)19835;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1209884630U;
unsigned char var_21 = (unsigned char)217;
unsigned long long int var_22 = 7806211798980290754ULL;
unsigned long long int var_23 = 7012695150058508926ULL;
unsigned long long int var_24 = 2992136811834001448ULL;
unsigned int var_25 = 2174326993U;
short var_26 = (short)-29929;
unsigned char var_27 = (unsigned char)152;
unsigned long long int var_28 = 3812788396682544943ULL;
unsigned int var_29 = 663233092U;
unsigned long long int var_30 = 1220761992930566033ULL;
short var_31 = (short)11823;
short var_32 = (short)-30411;
unsigned long long int var_33 = 692599427412062665ULL;
unsigned long long int var_34 = 4199909448030593987ULL;
short var_35 = (short)-13375;
unsigned int var_36 = 1186067023U;
unsigned int var_37 = 3290996328U;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)1;
short var_40 = (short)-21854;
unsigned int var_41 = 278688626U;
unsigned long long int arr_0 [20] ;
_Bool arr_1 [20] ;
short arr_2 [20] [20] ;
unsigned int arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
_Bool arr_5 [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] [20] ;
unsigned int arr_11 [20] [20] [20] [20] ;
short arr_12 [20] [20] [20] [20] [20] ;
_Bool arr_13 [20] [20] [20] [20] ;
unsigned long long int arr_16 [21] ;
_Bool arr_18 [14] [14] ;
unsigned int arr_19 [14] ;
short arr_20 [14] [14] ;
unsigned long long int arr_27 [14] [14] ;
unsigned long long int arr_29 [14] [14] [14] ;
unsigned long long int arr_34 [14] [14] [14] [14] [14] ;
short arr_6 [20] [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] [20] [20] ;
short arr_17 [21] ;
short arr_26 [14] ;
unsigned long long int arr_35 [14] [14] ;
unsigned long long int arr_38 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 17518163048910403109ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)22985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2756610880U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3801139545627901280ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 697201214U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 16524857129989903000ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1614106702U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)9617;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = 6582836917146861311ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 2608032614U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-15041;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 16388885723701900113ULL : 3756168682086459046ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 3598808493788920576ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 5151713230228519412ULL : 17925363227639080887ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-3159;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 15408505847525210425ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)10756;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (short)-6248 : (short)-5962;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? 2452069912403299674ULL : 5545437048708366734ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 17853685464446997700ULL : 2903356618692411646ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
