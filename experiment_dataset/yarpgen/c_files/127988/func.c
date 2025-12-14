/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127988
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_1 [i_0 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_1))) : (((/* implicit */unsigned long long int) min((9223372036854775791LL), (((/* implicit */long long int) (unsigned short)12002)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (!((!(((arr_5 [i_2 - 1] [i_1] [i_0]) <= (15234369584555650174ULL)))))));
                            arr_13 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_0 - 3] [i_0 - 3] [i_1] [17ULL] [i_2 + 1] [i_4 - 1] [i_4]) ? (10663305545841547079ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 3]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_0 - 3]) : (((/* implicit */long long int) arr_8 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_2 + 1])))) : ((-(arr_1 [i_0 - 1] [i_0 - 3])))));
                        }
                        arr_14 [i_0] [i_1] &= ((/* implicit */unsigned int) max((min((((((/* implicit */int) (unsigned char)20)) << (((arr_4 [i_1]) - (12735764963590073888ULL))))), (((/* implicit */int) var_3)))), (((((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [7U] [i_0] [i_2] [i_2])) || (((/* implicit */_Bool) var_6)))))))));
                        var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(min((arr_1 [(unsigned char)12] [(unsigned char)12]), (((/* implicit */long long int) var_4))))))), ((-(min((((/* implicit */unsigned long long int) (unsigned char)236)), (15234369584555650174ULL)))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])))), (max((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [0U])), ((-(((/* implicit */int) arr_16 [i_0 - 1] [i_0] [(unsigned short)10] [i_0] [i_0] [i_0 - 1]))))))));
                        var_19 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)230)))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(var_4)))), (var_5))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_0] [2U] [i_0] [11U] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_11 [i_1 - 1] [i_1] [i_1] [i_1 - 1]), (var_3)))), ((~(((/* implicit */int) arr_11 [i_1 - 1] [i_1] [7ULL] [i_1 - 1]))))));
                            var_20 = min(((-(var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_1 - 1]))) / (15234369584555650174ULL)));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (3908088370U)));
                            arr_25 [i_2 + 1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) arr_1 [i_0] [(_Bool)1]))))) ? (arr_2 [i_0 - 2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_26 [i_7] [i_5] [(unsigned short)14] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (~(3212374489153901442ULL)));
                            var_23 = ((/* implicit */unsigned int) (-(15234369584555650174ULL)));
                        }
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) (((-((+(((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 4; i_9 < 16; i_9 += 2) 
                        {
                            arr_35 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (((/* implicit */int) arr_11 [i_9 + 2] [i_2 - 1] [i_0] [i_0 + 1]))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1065848662U)))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_12))))));
                            var_26 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((3908088350U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25281))))))));
                            var_27 = ((/* implicit */unsigned char) (~(((arr_12 [i_2 + 1] [14LL] [i_8] [i_2 + 1] [i_0 + 1] [i_1 - 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_9] [i_9]))) : (arr_6 [i_1] [i_2] [i_1] [i_9])))));
                        }
                        var_28 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [(unsigned short)5] [i_1 - 1] [i_2] [i_8])))), (((/* implicit */int) arr_22 [i_2] [i_8]))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_3)))), ((-(((/* implicit */int) (unsigned short)8192))))))) : (((((/* implicit */_Bool) 3989153280U)) ? (3663989185U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                        arr_36 [i_0] &= ((/* implicit */short) var_8);
                    }
                    arr_37 [i_0] = min((arr_3 [i_0 - 1] [i_1 - 1]), (min((arr_3 [i_0 - 3] [i_1 - 1]), (arr_3 [i_0 - 2] [i_1 - 1]))));
                    arr_38 [i_0] [i_1 - 1] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)14] [(unsigned short)14] [i_1 - 1] [(unsigned short)9] [17ULL])))))) >= (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_41 [i_0] [i_1 - 1] [i_10] = ((/* implicit */short) 731693547U);
                        var_29 = var_7;
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
                        {
                            arr_45 [i_0] [i_0] [i_10] [i_0 - 1] [(short)12] = ((/* implicit */unsigned int) ((((arr_12 [i_0 - 2] [i_1 - 1] [i_0] [i_10] [i_0] [3U] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [14U] [(_Bool)0] [i_0] [i_0]))) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                            arr_46 [i_0] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_23 [i_1 - 1]);
                            var_30 *= ((/* implicit */unsigned short) ((long long int) var_6));
                            var_31 = ((/* implicit */unsigned short) (unsigned char)255);
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_49 [i_10] [i_10] = ((/* implicit */unsigned short) (~(arr_6 [i_0] [i_12 - 1] [i_0 - 3] [i_2 + 1])));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [9ULL] [i_0 - 3] [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_12 - 1]))) : (18446744073709551610ULL))))));
                            arr_50 [i_0] [i_0 - 3] [i_0] [(_Bool)1] [(unsigned char)8] [8ULL] [i_0 - 1] &= ((/* implicit */unsigned long long int) ((short) (-(18446744073709551592ULL))));
                            arr_51 [i_1] [(unsigned char)8] [(unsigned char)8] [i_1] [(unsigned char)8] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)230))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 4; i_13 < 14; i_13 += 4) 
                        {
                            arr_54 [i_0] [i_10] [i_10] [i_13] = ((((/* implicit */_Bool) var_6)) ? (arr_27 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_13 - 1]) : (arr_27 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_13 - 2]));
                            var_33 += ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_13]))))))));
                            var_34 = ((/* implicit */unsigned long long int) arr_43 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_10] [i_2]);
                            var_35 *= ((/* implicit */short) arr_7 [i_0] [i_1] [i_1] [(_Bool)1]);
                            var_36 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ ((-(1861156906U)))));
                        }
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(386878945U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_10]))));
                            var_37 = (-(var_15));
                            var_38 &= ((/* implicit */unsigned char) 9412562090913072047ULL);
                        }
                    }
                }
            } 
        } 
        arr_58 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_2))) <= (((((/* implicit */_Bool) 3663989193U)) ? (((/* implicit */int) (unsigned short)65402)) : (((/* implicit */int) (short)14))))));
    }
    var_39 *= ((/* implicit */unsigned char) var_1);
}
