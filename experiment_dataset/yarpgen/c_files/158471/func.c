/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158471
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_16 |= ((((((/* implicit */long long int) arr_3 [i_0 + 3])) - (5873247347263573365LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21491)) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 1])))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
            {
                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_7 [i_0 + 3] [i_1] [i_0 + 3])), (arr_4 [i_0 + 2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) min(((short)14632), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (133169152LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)15)), (arr_6 [i_0 + 4]))))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((unsigned long long int) arr_7 [i_2] [i_2] [i_2])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 181932860U)))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2112086147151057060LL)) ? ((~(127U))) : (((4294967295U) >> (((arr_12 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] [i_4]) - (3539525517U))))))) <= (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (signed char)61))))) ? (((((/* implicit */_Bool) (signed char)61)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned int) -15)))) : (3018991811U)))));
                        var_20 = ((/* implicit */long long int) (+((+(33538048U)))));
                        arr_14 [i_1] [i_1] [i_2] [i_1 + 3] [i_4] [i_0 + 4] [i_4] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))), ((-(arr_6 [i_2])))));
                    }
                    for (long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_5] [i_2] [i_2] [i_5 - 2] [i_5 - 2] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (33538077U)));
                        var_21 = arr_2 [i_0 - 1];
                        var_22 = ((/* implicit */unsigned int) var_8);
                    }
                    var_23 = ((/* implicit */long long int) (signed char)127);
                }
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    arr_20 [i_0 + 3] [i_0] [i_0 + 4] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 2457485097U))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((var_5) > (((/* implicit */long long int) arr_8 [i_0 - 1] [i_1] [i_0 - 1])))) ? (((((_Bool) (signed char)45)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_7] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (592352764U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1])) != (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))))));
                        arr_23 [i_7] [i_1 - 2] [i_7] = ((/* implicit */short) min((min((3LL), (((/* implicit */long long int) arr_19 [i_0 + 1] [i_0])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_0 + 3] [i_0 + 3])))))));
                        var_25 *= (+((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 3]))) : (2790300402U))))));
                        var_26 = ((/* implicit */unsigned int) 2361966926021340239ULL);
                    }
                    var_27 = ((/* implicit */signed char) 6381202854350827476LL);
                    arr_24 [i_6] [i_6] [i_0 - 1] [i_6] = ((/* implicit */long long int) (short)2);
                }
                for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_27 [i_0] [i_1 + 2] [i_8] [i_1 + 2] [i_1 - 2] &= ((/* implicit */int) var_0);
                    arr_28 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = min((((long long int) (signed char)-27)), (((/* implicit */long long int) ((((/* implicit */_Bool) 510U)) || (((/* implicit */_Bool) 3402026460235504800LL))))));
                    var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (0U) : (2041699888U)));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_0 [i_8] [i_1]))))) ? (((((-946306615657264252LL) + (9223372036854775807LL))) >> (((3956159948U) - (3956159922U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 338807347U)) ? (arr_21 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    arr_31 [i_2] = ((/* implicit */unsigned char) 946306615657264251LL);
                    arr_32 [i_0] [i_1] |= ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (var_11)))), ((-9223372036854775807LL - 1LL)))));
                }
                var_30 = ((/* implicit */short) ((long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_2]))))), (16U))));
            }
            for (long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
            {
                var_31 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17))) != (0U)));
                arr_35 [i_0 + 4] = ((((/* implicit */_Bool) ((unsigned int) ((int) arr_13 [i_0 + 4] [i_0] [i_0] [i_0 + 4] [i_0])))) ? (max((arr_5 [i_0] [i_0]), (3402026460235504800LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21966)) ? (153167358) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_1] [i_10]))))))))));
                var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_9 [i_1 + 2] [i_1 + 2] [i_1] [i_1]))) < (((/* implicit */int) ((arr_9 [i_1 + 2] [i_1 + 2] [i_1] [i_1]) <= (arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_33 += ((/* implicit */unsigned long long int) ((((max((var_9), (((/* implicit */long long int) arr_0 [i_11] [i_11])))) >= (((/* implicit */long long int) 0U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_10] [i_11])) : (var_13)))) : (max((((/* implicit */long long int) 4095)), (3402026460235504800LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1 + 2])))));
                    var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2253267420U)) ? (((((/* implicit */_Bool) 3961319819U)) ? (arr_13 [i_0 - 1] [i_1] [i_11] [i_11] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) & (0LL))))));
                    arr_38 [i_0 + 4] [i_1] [i_10] [i_0 + 4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_11])) - (((/* implicit */int) arr_10 [i_1 - 1] [i_11] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)89))))) : (-946306615657264231LL))) : (((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (max((((/* implicit */long long int) arr_9 [i_0] [i_0 + 4] [i_10] [i_11])), (7984284068348245049LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned int) var_13)) : (arr_0 [i_1] [i_10]))))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) -3402026460235504800LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 17U)))))) : (-3402026460235504782LL))) == (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)238)) ? (33538048U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                    arr_44 [i_0 - 1] [i_1] [i_10] [i_10] |= min((((/* implicit */unsigned int) ((unsigned char) 12U))), (min((((/* implicit */unsigned int) (short)-14886)), (min((0U), (3015172110U))))));
                    var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) + (((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)82))))))));
                }
            }
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((int) (signed char)14)))) ? (min((min((((/* implicit */unsigned int) 350863574)), (4294967284U))), (((((/* implicit */_Bool) 465105149U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_13 - 1]))) : (var_7))))) : (((/* implicit */unsigned int) ((((_Bool) (signed char)23)) ? (((((/* implicit */_Bool) 3829862146U)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) ((unsigned char) var_6))))))));
                var_37 ^= (+(arr_42 [i_0] [i_0] [i_13] [i_1]));
            }
            var_38 ^= ((/* implicit */long long int) (+((+(536866816U)))));
            arr_47 [i_0] [i_0] &= ((/* implicit */long long int) ((int) max((((((/* implicit */_Bool) -5509667226673990725LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (short)-14955)))));
        }
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            arr_52 [i_0] [i_14] [i_14] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (arr_48 [i_0] [i_0 - 1] [i_14]) : (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */long long int) (-(-115199990)))) : (max((((/* implicit */long long int) (unsigned char)56)), (0LL)))))));
            var_39 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) max(((short)14967), ((short)-14117))))))), ((-(-2539990435713650997LL)))));
        }
        arr_53 [i_0] [i_0 + 1] = ((/* implicit */long long int) arr_37 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 1]);
        var_40 += ((/* implicit */long long int) (~(-1)));
        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) arr_50 [i_0 + 4])) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) -1)) : (12703647280973847600ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((arr_9 [i_0] [i_0] [i_0] [i_0 + 4]) << (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 + 3])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (short i_15 = 4; i_15 < 18; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */_Bool) ((unsigned long long int) -4218461187913284933LL));
                                arr_63 [i_0 + 2] [i_15 - 3] [i_16] [i_0 + 2] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2807260731731191050ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14967))) : (134217712U)))) ? (((/* implicit */long long int) ((unsigned int) (short)-19943))) : (5509667226673990725LL)));
                                var_43 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14982))) + (-5509667226673990743LL)));
                                var_44 = ((/* implicit */long long int) (-((+(((/* implicit */int) min(((signed char)-14), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned int) 3LL);
                }
            } 
        } 
    }
    for (short i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                {
                    arr_73 [i_19] [i_19] [i_21] = ((((((/* implicit */_Bool) (~(542732540U)))) ? (((/* implicit */long long int) (-(arr_2 [i_20])))) : (max((((/* implicit */long long int) arr_70 [i_19] [i_20])), (var_4))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6330563827689493776LL)))))));
                    arr_74 [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) + (((((/* implicit */_Bool) (signed char)-31)) ? (((int) var_4)) : (((/* implicit */int) ((_Bool) (signed char)112)))))));
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) arr_40 [i_19] [i_20] [i_21] [i_21]))), (((unsigned int) arr_0 [i_19] [i_19]))))), ((((!((_Bool)1))) ? (max((((/* implicit */unsigned long long int) 2268532756U)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1436413358U)) ? (1661324637154387968LL) : (((/* implicit */long long int) arr_65 [i_20] [i_20])))))))))));
                }
            } 
        } 
        arr_75 [i_19] [i_19] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2650022114U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-2LL)));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
        {
            for (unsigned char i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                {
                    var_47 = ((/* implicit */unsigned int) var_12);
                    var_48 &= ((/* implicit */unsigned int) arr_45 [i_19] [i_22] [i_23] [i_22]);
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 4) 
                        {
                            {
                                var_49 = min((((/* implicit */long long int) ((((/* implicit */_Bool) 1348658415U)) && (((/* implicit */_Bool) 1144689067297939339LL))))), (max((((/* implicit */long long int) (short)17220)), (19LL))));
                                arr_89 [i_19] [i_19] [i_19] [i_19] [i_22] [i_19] &= ((/* implicit */int) ((((/* implicit */_Bool) 2LL)) ? (((/* implicit */long long int) 1279795186U)) : (24LL)));
                                arr_90 [i_19] [i_24] [i_19] [i_19] [i_19] [i_19] [i_19] = var_7;
                                var_50 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((long long int) ((long long int) 9223372036854775807LL))) - (9223372036854775807LL)))));
                                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3088243407U)) ? (((/* implicit */long long int) 4172211596U)) : (-9223372036854775807LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_91 [i_19] [i_19] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)22172)) ? (-1LL) : (-9223372036854775807LL)))));
    }
    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-6943837801445326682LL) >= (((/* implicit */long long int) -1147143938)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_10)))))) | (var_11)))));
    var_53 += ((/* implicit */short) var_14);
    var_54 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -24LL))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 8062666571483011164LL))))))));
    var_55 = ((/* implicit */long long int) (signed char)(-127 - 1));
}
