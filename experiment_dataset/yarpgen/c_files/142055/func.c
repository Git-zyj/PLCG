/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142055
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
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (2305841909702066176ULL) : (1ULL)))));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1]));
                    var_21 = ((/* implicit */unsigned char) (-(((arr_3 [i_2]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0 + 1] [i_0 + 3]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_21 [i_6] [i_3] [i_4] [i_5] [3LL] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) arr_17 [i_7] [i_4] [i_5 - 1] [i_5 + 1]));
                            var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_4] [i_5] [i_5 - 1]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_23 = (!(((/* implicit */_Bool) 5399427734434351531LL)));
                            var_24 = (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7818))) : (arr_25 [i_3] [i_4] [(signed char)2] [i_5] [i_6] [i_6] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 1] [(signed char)2] [i_6] [i_5] [i_5 + 1]))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_19 [3ULL] [i_4] [i_4] [i_4] [i_5] [(_Bool)0] [12ULL]))));
                        var_26 &= ((/* implicit */signed char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))));
                        var_27 *= ((((/* implicit */_Bool) var_13)) ? (arr_23 [i_3] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (261793316231150265LL)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2396641021996435675LL) < (((/* implicit */long long int) 0U)))))) <= (arr_9 [i_10 - 1])));
                                var_29 = (signed char)47;
                                var_30 = ((/* implicit */signed char) ((17700478804639817155ULL) & (((unsigned long long int) (signed char)47))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        arr_36 [(short)0] [i_4] [(_Bool)1] [i_11] = ((/* implicit */short) (-(112664370206649659ULL)));
                        var_31 = ((((/* implicit */_Bool) var_0)) ? (arr_23 [i_5 - 1] [i_11]) : (arr_23 [i_5 - 1] [i_5 - 1]));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) (((!((_Bool)1))) || (((((/* implicit */int) var_7)) < (((/* implicit */int) (short)1756))))));
                        var_33 = ((((((/* implicit */unsigned long long int) var_9)) != (0ULL))) ? (((((/* implicit */_Bool) var_1)) ? (-3694475407313484480LL) : (((/* implicit */long long int) 3872787410U)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) ((long long int) arr_26 [i_3]));
                        var_35 = ((/* implicit */long long int) arr_33 [9ULL] [i_5 - 1] [i_5 + 1] [i_5] [i_13] [i_13]);
                    }
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) 12994069384201755490ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_37 += ((/* implicit */unsigned long long int) var_2);
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16140902164007485448ULL)) ? (((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_3] [(short)3] [i_5] [i_14])) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) var_10);
                            var_40 = ((((/* implicit */_Bool) arr_11 [i_5 + 1])) ? (4523386959764212771ULL) : (arr_11 [i_5 - 1]));
                        }
                        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (27U)))));
                            var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_5] [i_5 + 1] [i_14])) || (((/* implicit */_Bool) 746265269069734454ULL))));
                            var_43 = ((/* implicit */signed char) arr_46 [i_5] [i_5 + 1] [i_5] [i_14] [i_17] [i_14]);
                            var_44 += ((/* implicit */signed char) arr_22 [i_3] [i_3] [i_5 - 1] [i_14] [i_17]);
                        }
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_45 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_43 [(signed char)3] [i_5] [i_14] [i_18 - 1])))));
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_3] [i_3] [i_5 + 1] [i_14])) ? (((arr_49 [i_5]) | (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) >= (arr_35 [i_3] [(short)6] [(short)6] [(short)6]))))));
                            var_47 = ((/* implicit */unsigned char) arr_38 [i_4] [i_4] [i_4] [i_14] [i_4] [i_5 - 1]);
                        }
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_3] [i_4] [i_4] [i_5 + 1] [i_14])) ? (1073741823ULL) : (((/* implicit */unsigned long long int) arr_51 [i_3] [i_4] [i_5 + 1] [i_4] [i_5 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_19 = 1; i_19 < 12; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) arr_42 [i_19 - 1]);
                                var_50 = ((/* implicit */signed char) arr_17 [i_19 - 1] [i_5 - 1] [i_5] [i_19]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 3) 
        {
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                {
                    var_51 = ((/* implicit */long long int) max((var_51), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) % (31952750689628108LL)))));
                    arr_62 [i_3] [i_21] [i_22] [i_21] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_17)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 4; i_23 < 13; i_23 += 1) 
                    {
                        for (unsigned int i_24 = 0; i_24 < 14; i_24 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_21] [i_21] [i_22 - 1] [i_23 - 4] [i_24])) ? (arr_9 [i_22 - 1]) : (((/* implicit */unsigned long long int) arr_46 [i_3] [i_21] [i_22 - 1] [i_23] [(short)12] [i_23 + 1]))));
                                arr_69 [7LL] [(unsigned char)8] [(unsigned char)8] [i_21] [i_22 - 1] [(unsigned char)8] [i_24] = (_Bool)1;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 3; i_25 < 13; i_25 += 3) 
                    {
                        arr_72 [i_21] [i_21] [i_22] = ((/* implicit */signed char) ((arr_70 [i_3] [i_22] [i_25]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_45 [i_3] [i_21] [i_22] [i_22 - 1] [i_25])) : (((/* implicit */int) (short)32767))))));
                        var_53 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_22 - 1] [i_22 - 1] [i_25 - 2] [i_25 - 1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_3] [i_22 - 1] [i_22 - 1] [i_25 - 2])) ? (((/* implicit */int) arr_27 [i_22 - 1] [i_22 - 1] [i_22] [i_25 + 1])) : (((/* implicit */int) arr_27 [i_3] [i_22 - 1] [i_25] [i_25 + 1]))));
                            arr_77 [i_3] [i_21] [i_22] [i_25] [i_26] = ((/* implicit */short) arr_9 [10ULL]);
                            var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) var_1))));
                        }
                        var_56 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_22 - 1] [i_25] [i_25 + 1] [i_25] [i_25] [i_25 - 1] [i_25]))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_13)) : (15562467325457215250ULL)))));
                    }
                }
            } 
        } 
    }
    var_57 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (min((((/* implicit */unsigned long long int) var_10)), (16803624341122427279ULL))) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (signed char)-125))));
}
