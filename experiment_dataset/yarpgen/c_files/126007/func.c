/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126007
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
    var_13 = ((/* implicit */signed char) 1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (29) : (-1)));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)135))) || (((/* implicit */_Bool) (-(1932041893))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) 0ULL);
                                var_17 ^= min(((-(((unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_12)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_6))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_1] [i_5] [(unsigned short)5])) ? (((/* implicit */int) arr_17 [0LL] [i_6 - 2] [i_5 + 2])) : (var_3))))));
                        var_20 = ((/* implicit */unsigned short) 331575444274606404ULL);
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) arr_15 [i_0] [(unsigned char)12] [i_5] [i_5 + 3] [0])) : (var_10))), (((/* implicit */long long int) var_2))))));
                        var_22 = ((/* implicit */unsigned long long int) var_8);
                        var_23 = ((/* implicit */int) (-(var_1)));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_0] [i_7])))))), (((((/* implicit */_Bool) -6022558843500740223LL)) ? (arr_6 [i_7] [i_5] [i_7]) : (((2503463311636714357LL) / (((/* implicit */long long int) 1)))))))))));
                        arr_25 [i_0] [i_1] [(unsigned char)8] [i_0] = ((/* implicit */int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) (+(var_5))))));
                    }
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -261348687);
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (-((~(((/* implicit */int) ((unsigned char) 4126691933U)))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -3534120882028527845LL)) ? (-1793375968) : ((-(((/* implicit */int) (unsigned short)65533))))))) - (-5081107046002434739LL)));
                                var_27 = ((/* implicit */unsigned short) ((_Bool) arr_8 [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) arr_30 [i_0] [i_1] [i_5 + 3] [i_10] [i_11])), (((/* implicit */long long int) arr_33 [i_1] [i_5] [i_5 + 1] [i_5 - 3] [i_5 + 1]))))) ? (261348687) : (((var_6) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_16 [0LL] [(unsigned char)12] [i_1] [4ULL] [i_11] [i_1] [i_5 - 3]))))));
                                arr_35 [12] [i_0] [i_5 + 2] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_1] [i_5 + 4] [i_5 - 3])) % (((((/* implicit */int) arr_18 [i_0] [i_5 + 4] [i_5 - 3])) + (((/* implicit */int) arr_14 [(_Bool)1] [i_5 + 4] [i_5 - 3] [i_5 + 2] [i_5 + 2] [i_5]))))));
                                var_29 = ((((/* implicit */_Bool) (-(((unsigned long long int) (unsigned short)14490))))) ? (((((/* implicit */_Bool) -5639286773888213319LL)) ? (var_2) : (arr_3 [i_0]))) : (((/* implicit */int) arr_16 [i_5 + 3] [(_Bool)1] [11ULL] [i_5 + 1] [3] [i_0] [4ULL])));
                                arr_36 [i_11] [6U] [6LL] [6LL] [10LL] [i_0] [8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(2080374784)))) ? (3473504376950008787LL) : (((((/* implicit */_Bool) var_3)) ? (7731917377415537199LL) : (((/* implicit */long long int) arr_20 [i_5 - 3] [i_0] [(unsigned short)9] [(_Bool)1] [i_11]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    var_30 = ((/* implicit */long long int) var_8);
                    var_31 = ((/* implicit */int) arr_1 [i_12] [i_0]);
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(var_12)));
                    var_32 = ((int) arr_29 [i_12] [i_12] [i_12] [i_0] [i_12]);
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) 261348687);
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_34 = (~(var_4));
                            arr_47 [i_0] [i_13] [i_12] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16543009479880559435ULL)) ? (var_5) : (((/* implicit */int) arr_8 [i_0]))));
                            var_35 = ((/* implicit */signed char) -9127284924806791883LL);
                        }
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (-(((/* implicit */int) arr_32 [i_0] [i_1] [i_0] [i_0])))))));
                    }
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        var_37 = ((((/* implicit */_Bool) -1)) ? (arr_12 [(unsigned short)13] [(unsigned short)13] [i_12] [i_15]) : (((/* implicit */unsigned long long int) arr_45 [i_0] [12ULL] [(_Bool)1] [i_15] [i_15 + 2])));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5616511268085587291LL)) ? (((/* implicit */int) var_7)) : (arr_0 [i_0])));
                        var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [(_Bool)1]) || (((/* implicit */_Bool) (unsigned char)104)))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58890))) * (1693854459U)))));
                        arr_50 [i_1] [i_12] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */int) var_7))))) != (var_11)));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned int) (!((_Bool)0)));
                        arr_53 [i_0] [i_16] [i_12] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18414242517102011703ULL)) ? (var_11) : (arr_24 [i_0] [i_1] [i_12] [i_0])));
                    }
                }
                for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            {
                                arr_62 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) -1793375968);
                                var_41 = ((/* implicit */long long int) arr_59 [i_1] [i_0]);
                                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_28 [i_1] [i_18] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((int) arr_28 [i_1] [i_1] [i_17] [6ULL] [i_19]))) : (((-185505412409375470LL) + (((/* implicit */long long int) arr_28 [i_1] [i_1] [i_17] [i_18] [i_19]))))));
                                var_43 = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_17])), (-2296070608169571469LL))));
                            }
                        } 
                    } 
                    arr_63 [i_0] [i_0] = ((/* implicit */long long int) min((((unsigned long long int) -5847608862028591950LL)), (((/* implicit */unsigned long long int) ((var_5) != (var_3))))));
                    arr_64 [i_0] [i_0] [6] [i_17] = ((((/* implicit */_Bool) ((signed char) arr_40 [i_17] [i_0] [i_0] [i_0] [i_0]))) ? (((arr_37 [i_0] [i_1] [i_17] [i_1]) ? (-1793375957) : ((-(var_8))))) : (((int) (_Bool)0)));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        for (long long int i_21 = 4; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_0])) << (((var_4) - (6530675940323978778ULL)))));
                                var_45 = ((/* implicit */_Bool) (unsigned char)16);
                                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_69 [i_0] [i_21 - 3] [i_0] [9ULL] [i_21 + 3] [i_21 - 2] [i_21 - 3])) : (((((/* implicit */_Bool) arr_19 [i_0] [i_20] [i_0] [i_1] [i_0] [i_0])) ? (1269908883) : (((/* implicit */int) (unsigned short)8318))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)34))) ^ (5318285162011790347LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_4)))))));
                                var_47 = ((/* implicit */int) ((((unsigned int) arr_20 [i_21 - 4] [i_21] [i_20] [i_21] [6])) + (((((/* implicit */_Bool) arr_20 [i_21 + 2] [i_1] [i_20] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_2)) : (arr_20 [i_21 - 4] [i_21] [(unsigned short)2] [i_21] [8])))));
                                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (unsigned char)151))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 13; i_22 += 3) 
                    {
                        for (unsigned short i_23 = 1; i_23 < 13; i_23 += 4) 
                        {
                            {
                                var_49 *= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (16230741707646349386ULL)))));
                                arr_78 [4LL] [i_1] [i_22 - 1] [i_0] [i_22 - 1] = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_50 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50973)) || (((/* implicit */_Bool) (((((~(1386030970))) + (2147483647))) >> (((((unsigned int) var_0)) - (3165U))))))));
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 19; i_24 += 4) 
    {
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            {
                var_51 = (~(((/* implicit */int) (unsigned char)94)));
                var_52 = ((/* implicit */int) (~(2947969797507872288LL)));
                var_53 = ((long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_80 [i_25 - 1])));
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned long long int) var_0);
}
