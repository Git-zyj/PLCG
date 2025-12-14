/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122066
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */signed char) var_12);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (9587903441346768573ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)255)) + (((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((unsigned short) (unsigned short)255))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-8912)), ((unsigned short)62940)))) - (56619)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_4 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)250)), (7262624172090323491ULL)));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) ? (2356416977725592693LL) : (((/* implicit */long long int) 2424193682U))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_2 [i_2]), (arr_2 [i_2])))), (min((arr_9 [i_2]), (arr_9 [i_2])))));
        arr_11 [i_2] = max((((-2356416977725592705LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))))), (2356416977725592695LL));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_2] [i_3] [i_3 + 1] = ((((-1881118510092664875LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_4 [i_2] [i_3 - 1])) - (135))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1881118510092664864LL)))) ? (((((/* implicit */_Bool) 1100232514)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11184119901619228125ULL))) : (((18446744073709551615ULL) >> (((((/* implicit */int) (short)16718)) - (16675)))))));
                var_22 = ((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)15388)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (1881118510092664876LL) : (1881118510092664874LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_14 [11LL] [i_3 - 1])));
                arr_19 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (-(arr_9 [i_3 + 1])));
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
            {
                arr_22 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_9)))) : (((/* implicit */int) var_3))));
                arr_23 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1249161690)) || (((/* implicit */_Bool) 2356416977725592693LL))));
                var_24 = ((var_6) - (arr_6 [i_3 - 1] [i_3 + 2]));
                var_25 = ((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */int) arr_20 [i_3] [i_3 + 1]))));
                arr_24 [i_2] [i_2] [i_5] [(short)12] = ((/* implicit */signed char) ((unsigned short) (unsigned short)65535));
            }
        }
        for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 18; i_9 += 1) 
                    {
                        {
                            arr_37 [i_2] [i_6] [i_9] [i_8] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)50148)))) < (((/* implicit */int) var_3))));
                            var_26 = ((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_8 - 1] [i_8 + 2])) ? (arr_26 [i_8] [i_8 - 1] [i_8 + 1]) : (arr_26 [i_8 - 1] [i_8 - 1] [i_8 + 1]));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8 + 2] [i_9 - 1])) ? (arr_2 [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7845958479026622637ULL)) ? (((/* implicit */int) var_12)) : (var_15))))));
                        }
                    } 
                } 
                var_28 = (~(((/* implicit */int) (unsigned short)65535)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_13 [i_6 - 2] [i_6] [(short)16]));
                arr_42 [1] [1] [1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6 - 2] [i_6 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_2] [i_6 - 2] [i_10] [i_6]))));
                arr_43 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((var_10) ? (arr_26 [i_6] [i_6 + 2] [i_6]) : (arr_26 [i_6] [i_6 + 1] [i_6 + 1])));
                var_30 = ((/* implicit */unsigned long long int) ((3689914667U) >> (((((unsigned long long int) arr_0 [i_2])) - (30540ULL)))));
            }
            arr_44 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9]))))), ((((!(((/* implicit */_Bool) var_6)))) ? (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)15372)))) : (((/* implicit */unsigned long long int) -1265037539))))));
            arr_45 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2386575450U)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (arr_12 [i_6 - 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_2] [i_6] [i_2] [(short)9])))))));
        }
        for (unsigned int i_11 = 2; i_11 < 18; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 1; i_12 < 17; i_12 += 4) 
            {
                arr_50 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_39 [i_2] [i_2] [i_2] [i_11]);
                var_31 = max((3148900364661914113LL), (((/* implicit */long long int) 3689914668U)));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 2; i_13 < 16; i_13 += 3) 
                {
                    arr_53 [i_13] [i_12] [i_11] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((7262624172090323488ULL), (13548315815512681887ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2356416977725592690LL))))))))));
                    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-4))));
                }
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) var_15);
                        var_34 = ((/* implicit */signed char) arr_48 [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        arr_61 [i_2] [i_11 + 1] [i_12] [11U] [i_14] [i_11 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)19411)) || (((/* implicit */_Bool) 1378279718511729302ULL)))))))) && (((/* implicit */_Bool) (-(-7430952494778081669LL))))));
                        var_35 = max(((+(((/* implicit */int) (unsigned short)15372)))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 4047076257797810383ULL))) || ((!(((/* implicit */_Bool) 13650404752150656669ULL))))))));
                        arr_62 [i_12] [(unsigned char)3] [i_14] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17566)) || (((/* implicit */_Bool) (unsigned short)47441))));
                        var_36 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((unsigned char) arr_21 [i_16] [i_11] [2] [i_11]))));
                    }
                    var_37 = ((/* implicit */unsigned int) min((7262624172090323512ULL), (((/* implicit */unsigned long long int) (signed char)-20))));
                    var_38 = ((/* implicit */unsigned short) ((int) (short)-6305));
                    arr_63 [i_14] [i_12] [i_14] [8ULL] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 13825436815791119289ULL))));
                    arr_64 [i_2] [i_11] [i_2] [i_14] [i_14] = ((/* implicit */short) ((1863211947) == (((/* implicit */int) (short)-19402))));
                }
                for (unsigned short i_17 = 2; i_17 < 16; i_17 += 4) 
                {
                    arr_68 [i_2] [i_11] [i_11] [i_2] [i_17] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 4047076257797810352ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_2] [i_2] [i_2] [i_2])) ? (var_15) : (var_6)))) : (7262624172090323491ULL))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2497042115U)) ? (17857893241799257819ULL) : (11184119901619228125ULL)))))));
                    var_39 = ((/* implicit */unsigned int) max((((((((((/* implicit */int) (signed char)-39)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)16271)) - (16244))))) ^ (((/* implicit */int) arr_48 [4U] [i_11] [i_11 + 1] [i_11 + 1])))), (min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)3)), ((unsigned char)255)))), (var_13)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        arr_73 [9ULL] [i_11] [i_12] [i_17 - 2] [17ULL] [i_18] = ((/* implicit */long long int) ((unsigned char) arr_38 [i_2] [i_11 - 1] [i_17 + 1]));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (unsigned short)47430)) : (((/* implicit */int) var_7))));
                        arr_74 [15ULL] [i_11] [i_11] [i_11] [(signed char)1] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) ((var_6) == (var_13))))));
                    }
                    for (int i_19 = 1; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */signed char) (~(((arr_65 [i_19 - 1] [i_17 + 2] [i_12 + 1] [i_11 - 1]) ^ (((/* implicit */int) (short)13829))))));
                        arr_79 [i_2] [i_2] [i_2] [i_12] [i_19] [i_19 - 1] = ((/* implicit */long long int) ((signed char) 463630863U));
                        var_42 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_29 [i_2] [i_2] [i_12 + 1])))), (min((arr_55 [i_19] [i_11 - 2] [(unsigned short)2] [(unsigned short)2]), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_19 + 1] [i_2]))))))));
                        arr_80 [i_2] [i_2] [i_12] [i_19] [i_19] [i_19] = (+((-(min((((/* implicit */int) (unsigned char)255)), (var_6))))));
                        arr_81 [i_19] [i_19] [i_19] [i_11] [i_11] [i_19] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_77 [i_17] [i_17 - 1] [14] [i_17 - 1]) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1900735758)) : (var_11))) - (1900735724ULL))))))));
                    }
                    for (int i_20 = 1; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7262624172090323483ULL)) || (((/* implicit */_Bool) -3095582485104798403LL))));
                        arr_84 [i_2] [i_20] [i_12 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_2] [1LL] [(_Bool)1] [(unsigned short)11]))));
                        var_44 = ((/* implicit */unsigned short) arr_66 [i_2] [i_11 - 1] [i_12]);
                        var_45 = ((/* implicit */signed char) max((15181592633431933318ULL), (((/* implicit */unsigned long long int) 1900735753))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)187)) && (((/* implicit */_Bool) -2062287990846613910LL))));
                        arr_87 [i_11 + 1] [i_11 + 1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6690027516625108620ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11756716557084442992ULL))))) : (0)));
                        arr_88 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))))));
                        arr_89 [i_2] [i_11] [i_2] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (signed char)13)))))));
                    }
                    for (long long int i_22 = 2; i_22 < 18; i_22 += 2) 
                    {
                        arr_92 [i_2] [i_2] [i_2] [i_17] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) min((-6), (((/* implicit */int) (unsigned char)15))))) && ((!((_Bool)1)))));
                        var_47 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (15181592633431933301ULL)));
                        arr_93 [i_22] [i_22] [i_22] [i_22] [(signed char)12] [i_22 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_2] [i_2] [3U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_5)))) ? (3689914667U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11455543861221307974ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))))) : (arr_17 [i_22 - 2] [i_22 - 2] [i_11 - 1] [i_11])));
                        arr_94 [i_2] [i_2] = ((/* implicit */short) min((min((arr_77 [i_12] [i_11] [i_22 + 1] [i_17 - 2]), (arr_77 [i_2] [15] [i_22 - 1] [i_17 - 2]))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_14)), (0LL))), (((/* implicit */long long int) ((arr_66 [i_17 - 2] [i_17 - 2] [i_12]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                    }
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_11 - 2] [(signed char)6] [i_12 + 1])))))));
                }
                arr_95 [i_2] [i_2] = ((/* implicit */unsigned char) (+((+(var_0)))));
            }
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 4) 
            {
                var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3689914665U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8754)))))) ? (var_15) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8754)))))));
                arr_100 [i_2] [7LL] [i_23] [i_11] = ((/* implicit */unsigned short) arr_18 [i_2] [i_2] [11LL]);
                arr_101 [i_2] [i_2] [i_23] = ((/* implicit */unsigned int) min((min((arr_40 [i_11] [i_11] [i_11 - 1]), (((/* implicit */long long int) (signed char)6)))), (((/* implicit */long long int) 131071))));
                arr_102 [2ULL] [2ULL] [i_23] [i_23] = ((/* implicit */unsigned long long int) (+(((long long int) (-9223372036854775807LL - 1LL)))));
            }
            arr_103 [i_11] [i_2] = max(((~(arr_55 [i_2] [i_2] [(_Bool)0] [i_11 + 1]))), (max((arr_55 [i_11] [i_11] [i_11] [i_11 + 1]), (arr_55 [i_11] [i_11] [i_11] [i_11 + 1]))));
            arr_104 [13LL] = ((/* implicit */unsigned int) ((int) (signed char)20));
        }
    }
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))), (((/* implicit */unsigned long long int) ((var_4) ? (var_13) : (((/* implicit */int) var_5)))))))) ? (((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) >> ((((+(var_15))) + (1413335464))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 8896900509352540313ULL)) ? (((/* implicit */int) (_Bool)1)) : (532578418))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
