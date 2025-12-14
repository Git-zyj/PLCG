/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16697
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */signed char) (unsigned short)1023);
                                var_14 = ((/* implicit */int) ((signed char) max((((((/* implicit */int) (unsigned short)64503)) ^ (((/* implicit */int) (unsigned short)1032)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((-1888054503) > (((/* implicit */int) (short)120))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)30666))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1888054497))))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))))) && (((/* implicit */_Bool) ((unsigned int) -1888054498))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 16; i_7 += 2) 
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7])) ? (arr_10 [i_7 - 1] [i_7] [i_7 - 2] [i_7] [i_7] [i_7]) : (arr_10 [i_7 - 1] [7U] [i_7] [i_7] [i_7] [i_7]))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_17 [i_7] [i_7 - 2] [i_7] [i_7] [i_7 - 2] [i_7 - 1]) <= (arr_10 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_7 - 3] [i_7 - 2]))))));
                            }
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1888054473)) * (max((((/* implicit */unsigned int) 1888054473)), (arr_15 [i_6] [i_5] [i_1] [i_0]))))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65525)) + (((/* implicit */int) (unsigned short)57440))))) ? (((/* implicit */int) (unsigned short)64503)) : ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_8 = 3; i_8 < 15; i_8 += 4) 
                            {
                                arr_23 [i_6] [(signed char)8] [i_8] [i_6] [i_8 - 2] |= (~(((/* implicit */int) (short)3627)));
                                var_21 = ((/* implicit */unsigned int) (~(((long long int) (short)-121))));
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (~(((/* implicit */int) arr_19 [i_0] [i_8 + 1] [i_5] [6U] [i_8] [6U] [3ULL])));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) 2965612453U)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (short)-128)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-120))) < (arr_18 [i_8] [i_8] [i_8] [i_1] [i_8])))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */int) (!(((/* implicit */_Bool) 2895511300U))));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 2) 
    {
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 1888054497)) && (((/* implicit */_Bool) (unsigned short)65534)))))));
                        var_25 ^= ((/* implicit */signed char) ((unsigned char) (+(arr_29 [i_11] [i_11]))));
                        var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1038))))) % (((/* implicit */int) ((((/* implicit */int) arr_30 [i_9] [i_9] [i_9])) < (((/* implicit */int) arr_26 [(_Bool)1]))))));
                    }
                    for (int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((262143) << (((((/* implicit */int) (unsigned short)65514)) - (65509)))))) ? ((+(((/* implicit */int) (unsigned short)64492)))) : (((int) arr_29 [i_9] [i_9]))));
                        arr_37 [i_9] [i_10] = ((/* implicit */unsigned long long int) ((-5306585475955511002LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527)))));
                        var_28 += ((((/* implicit */int) ((((/* implicit */_Bool) 2502121546U)) || (((/* implicit */_Bool) (unsigned short)42973))))) / (((/* implicit */int) ((_Bool) (unsigned short)8))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2)) * (((/* implicit */int) ((((/* implicit */_Bool) 2996229857U)) || (((/* implicit */_Bool) arr_35 [i_9])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 18; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) min((var_30), ((~(((((/* implicit */int) (unsigned short)1)) * (((/* implicit */int) (short)-102))))))));
                                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_9] [i_10])) + (2147483647))) << (((((/* implicit */int) (short)120)) - (120))))))));
                            }
                        } 
                    } 
                    arr_44 [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1014)) ? (((((/* implicit */_Bool) 2160810534U)) ? (1138525500) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (unsigned short)11))));
                }
                for (short i_16 = 2; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_32 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 16; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 17; i_18 += 2) 
                        {
                            {
                                var_33 = (i_9 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) max((((-1888054493) - (-1752608203))), (((/* implicit */int) ((signed char) (short)32761)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) >> (((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1]) - (1379844609U))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_9] [i_16] [i_9])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1032)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -5)) >= (134184960U)))) : (((/* implicit */int) ((arr_48 [i_9] [i_17] [i_17] [i_9] [i_17]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) max((((-1888054493) - (-1752608203))), (((/* implicit */int) ((signed char) (short)32761)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) >> (((((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1]) - (1379844609U))) - (3766321098U))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_9] [i_16] [i_9])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1032)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -5)) >= (134184960U)))) : (((/* implicit */int) ((arr_48 [i_9] [i_17] [i_17] [i_9] [i_17]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))))))));
                                var_34 *= ((/* implicit */int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_18] [i_18]))) : (15920801842949148834ULL))))) < (max((((((/* implicit */_Bool) -1888054478)) ? (((/* implicit */int) (unsigned short)1032)) : (((/* implicit */int) arr_27 [i_16] [i_10])))), (((/* implicit */int) ((1888054493) >= (((/* implicit */int) arr_38 [i_10] [i_10] [i_16] [i_18])))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_43 [i_9] [i_9] [i_10] [i_9] [i_19] [i_19] [i_19]))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_60 [i_9] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_9 + 3] [i_9] [i_9] [i_9] [i_9])) ? (((arr_46 [i_9] [i_20]) / (((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) arr_55 [i_9] [i_10 - 2] [i_19]))));
                                var_36 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_32 [i_9 + 2] [i_19] [12] [i_20]))));
                                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2047U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3750052119U)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)1038))))) : (arr_58 [i_9] [i_9 + 3] [i_10] [i_10 - 1] [i_20]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_22 = 0; i_22 < 19; i_22 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) (+(arr_59 [i_9] [i_19] [i_19] [i_10] [i_9])));
                        var_39 = ((/* implicit */int) max((var_39), ((-(((/* implicit */int) (unsigned char)224))))));
                        var_40 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) 2985157852U)) != (12989905164116033805ULL))));
                    }
                    for (int i_23 = 0; i_23 < 19; i_23 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_57 [i_9] [i_23]) ^ (((/* implicit */unsigned int) -1831553525))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1309809444U)) < (12989905164116033810ULL))))) : (((((/* implicit */unsigned long long int) 0)) % (5456838909593517809ULL)))));
                        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2985157852U)) ? (((/* implicit */long long int) 1831553519)) : (4222124650659840LL)))) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) (unsigned short)8)));
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 19; i_24 += 4) 
                        {
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_10 + 1] [i_10 - 1] [i_9 - 1])) ? (((/* implicit */long long int) (-(4044241883U)))) : (((((/* implicit */_Bool) 4294967276U)) ? (-4222124650659844LL) : (((/* implicit */long long int) 134184977U))))));
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_24] [i_10 + 1] [i_9])) ? (((/* implicit */int) (unsigned short)64503)) : (arr_54 [i_9] [i_19] [i_24]))))));
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_9])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_45 [i_9])))))));
                        }
                    }
                }
                var_46 = ((/* implicit */unsigned int) arr_52 [i_9] [i_9 + 1] [i_9]);
                arr_68 [i_9] [i_10] [i_9] = ((/* implicit */int) 4160782297U);
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_9])) ? (((/* implicit */unsigned int) ((720184093) ^ (((/* implicit */int) (unsigned short)54164))))) : (min((arr_53 [i_9] [i_9] [i_9] [i_9] [i_10 - 1] [i_10] [i_9]), (arr_53 [i_9 + 1] [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_9])))));
            }
        } 
    } 
    var_48 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7340032)) ? (((/* implicit */int) (unsigned char)192)) : (-1831553525)))) ? (0U) : (((((/* implicit */_Bool) -11)) ? (((/* implicit */unsigned int) var_12)) : (2667057433U))))));
    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) max((((-7281860296499091114LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1014))))), (((/* implicit */long long int) var_10))))) ? ((-(max((var_6), (((/* implicit */unsigned long long int) 1385305426U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
