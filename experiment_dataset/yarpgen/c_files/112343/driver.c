#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5468850540530856112LL;
unsigned long long int var_1 = 930642217043430966ULL;
long long int var_2 = -5872923296562168568LL;
int var_3 = -1705141520;
long long int var_4 = 8467423536663473777LL;
long long int var_5 = -3769784621061186403LL;
unsigned long long int var_6 = 5428549833552249157ULL;
long long int var_7 = 1788230540880353385LL;
unsigned long long int var_8 = 9998516778462929920ULL;
long long int var_9 = 2874105825527849316LL;
int var_10 = 873353995;
int var_11 = -11776760;
unsigned long long int var_12 = 12256329259756764416ULL;
long long int var_13 = -8630690052401507864LL;
unsigned long long int var_14 = 5342313575700641772ULL;
int var_15 = 120285088;
int var_16 = 1431952283;
int var_18 = -50150031;
int zero = 0;
unsigned long long int var_19 = 5151638851688615822ULL;
int var_20 = 1745216590;
long long int var_21 = 2683940035585574391LL;
unsigned long long int var_22 = 17039467714808481370ULL;
int var_23 = -555543027;
int var_24 = -1950945386;
long long int var_25 = 4391091103168122797LL;
int var_26 = 1720146939;
unsigned long long int var_27 = 9443477563542472183ULL;
unsigned long long int var_28 = 5261252859132156468ULL;
int var_29 = 568243377;
int var_30 = -1485249913;
unsigned long long int var_31 = 14534999515444453081ULL;
int var_32 = -1440131043;
int var_33 = 1443314939;
unsigned long long int var_34 = 293320481870582597ULL;
int var_35 = -931661129;
long long int var_36 = -5995918048042858754LL;
unsigned long long int var_37 = 3403641199656476894ULL;
long long int var_38 = 2362091549322857651LL;
long long int var_39 = -7161344446597428587LL;
long long int var_40 = -294908398044501709LL;
long long int var_41 = 4598377108792012718LL;
int var_42 = 1723118117;
long long int var_43 = -2323515624133880193LL;
long long int var_44 = -2334286568121488045LL;
int var_45 = 1862250381;
unsigned long long int var_46 = 1905028711261405334ULL;
int var_47 = 2108873766;
long long int var_48 = 843118926665505657LL;
long long int var_49 = -8718801586004985857LL;
long long int var_50 = 3911424690995966572LL;
int var_51 = -2008392727;
long long int var_52 = -6202690376219195634LL;
int var_53 = 975277788;
int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
int arr_3 [15] ;
int arr_4 [15] ;
int arr_6 [15] ;
long long int arr_7 [15] [15] [15] ;
int arr_9 [15] [15] [15] ;
int arr_13 [15] [15] [15] ;
int arr_14 [15] ;
int arr_21 [19] ;
int arr_22 [19] [19] ;
long long int arr_24 [19] ;
long long int arr_25 [19] [19] ;
unsigned long long int arr_31 [20] ;
long long int arr_32 [20] ;
unsigned long long int arr_33 [20] ;
long long int arr_34 [20] [20] [20] ;
long long int arr_35 [20] [20] ;
unsigned long long int arr_36 [20] ;
int arr_38 [20] [20] ;
int arr_40 [20] [20] ;
unsigned long long int arr_42 [20] [20] [20] [20] ;
long long int arr_43 [20] [20] [20] [20] ;
long long int arr_49 [20] [20] [20] ;
long long int arr_50 [20] [20] ;
unsigned long long int arr_54 [20] [20] [20] ;
int arr_56 [20] [20] [20] ;
long long int arr_57 [20] [20] [20] ;
long long int arr_62 [20] [20] [20] [20] ;
unsigned long long int arr_64 [20] [20] [20] [20] ;
long long int arr_66 [20] [20] [20] [20] ;
int arr_70 [20] ;
unsigned long long int arr_73 [20] [20] ;
int arr_79 [20] ;
int arr_2 [19] ;
unsigned long long int arr_10 [15] [15] ;
long long int arr_11 [15] [15] ;
int arr_12 [15] [15] ;
long long int arr_15 [15] [15] ;
unsigned long long int arr_16 [15] ;
unsigned long long int arr_19 [15] [15] [15] ;
int arr_20 [15] [15] ;
int arr_23 [19] ;
long long int arr_28 [19] [19] ;
unsigned long long int arr_29 [19] ;
unsigned long long int arr_30 [19] ;
unsigned long long int arr_44 [20] [20] [20] ;
int arr_45 [20] [20] [20] [20] ;
unsigned long long int arr_46 [20] [20] ;
int arr_47 [20] [20] [20] [20] ;
int arr_48 [20] [20] ;
int arr_52 [20] [20] [20] ;
int arr_60 [20] ;
long long int arr_68 [20] [20] [20] ;
long long int arr_69 [20] [20] [20] ;
long long int arr_77 [20] [20] [20] ;
unsigned long long int arr_80 [20] [20] ;
unsigned long long int arr_81 [20] [20] [20] ;
long long int arr_82 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -2062173609;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7148783091372391927ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1890635511;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1290538457;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1517408848;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -8514278900114332873LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1161594116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1770645578;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 163566709;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = -1851542492;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = -404194759;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 2665736764160659891LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = -5340007782728039395LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 3079644552810505737ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 8158334225483650457LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = 3679063234636231578ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 2243001801564427975LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_35 [i_0] [i_1] = 4878197788511750110LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = 1052597722589148313ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_38 [i_0] [i_1] = -1017973458;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_40 [i_0] [i_1] = -349090695;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 2987010664321153331ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 6360370451034250462LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = -3025051187089093649LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_50 [i_0] [i_1] = 3649125404781205958LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 3132628829745006708ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -522276407 : 1519498779;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -6536256907687811388LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 289786796305843012LL : -1351552257319217136LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5434964592482369448ULL : 8948575468175627107ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = -5623541559533260988LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_70 [i_0] = 513830899;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_73 [i_0] [i_1] = 16496272949106862841ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_79 [i_0] = 1696987339;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1737544000;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 7842087501912598797ULL : 11181101606679085489ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -7097471939988597954LL : -6482413123024516471LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 489959496 : 1022271538;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = 8793724231061558562LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 298123411859827222ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 9602281225636002325ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = -610134587;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = -1607810532;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = -8189142068922679498LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 7913206243280011877ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 10201474522728435312ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 12087015352620072620ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = -1768169554;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_46 [i_0] [i_1] = 5593876608012541707ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 737982106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_48 [i_0] [i_1] = 1870220635;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = -2141181359;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? -289294214 : 2097200759;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2781323037044094340LL : -544368529833644781LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5609823913894222516LL : 9011273132709898706LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6261664586018342093LL : -6036727772806907762LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_80 [i_0] [i_1] = 14142956192889248430ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = 7936649807590181019ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_82 [i_0] = 3969260877009697281LL;
}

void checksum() {
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
    hash(&seed, var_53);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_68 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_69 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_77 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_80 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_81 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_82 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
