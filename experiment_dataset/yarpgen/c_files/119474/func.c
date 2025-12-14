/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119474
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned short)5112)) ? (var_12) : (((/* implicit */int) arr_3 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) (short)(-32767 - 1)))));
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        arr_17 [i_2] [i_4] [i_3] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 + 1] [13ULL] [i_3 + 2] [i_4 - 1]))))), (((((/* implicit */_Bool) arr_14 [i_3 + 1] [(short)0] [i_3 + 2] [i_4 - 1])) ? (286857759) : (arr_12 [i_3 + 1] [i_3] [i_3 + 2])))));
                        arr_18 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] &= ((/* implicit */long long int) arr_2 [i_2]);
                        arr_19 [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) (short)-23508);
                        var_20 = ((/* implicit */int) ((unsigned char) arr_11 [i_3 + 2] [i_3 + 2] [i_4 - 2]));
                    }
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_25 [i_2] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */short) ((max((var_4), (var_13))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_17))))))), (((short) arr_8 [i_3 + 1]))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_3 + 1] [i_3] [i_3 + 2])) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                            arr_26 [i_6] = ((/* implicit */signed char) ((((var_11) != (min((((/* implicit */unsigned int) (signed char)-38)), (var_15))))) ? (var_14) : (var_7)));
                        }
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) arr_9 [i_3 + 1] [i_3 + 1])) % (4294967279U)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) var_15);
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) arr_16 [i_1] [i_2] [i_7] [(signed char)15] [i_3 + 1]))));
                            arr_29 [i_1] [i_2] [i_2] [i_5] [7U] = ((/* implicit */short) ((var_15) - (var_7)));
                        }
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_25 = (short)16384;
                            var_26 |= ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1]);
                            var_27 = ((/* implicit */unsigned short) ((unsigned int) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)24558)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_37 [i_1] [i_2] &= ((/* implicit */short) (+(((unsigned int) 4294967273U))));
                            arr_38 [i_1] [i_2] [i_3] [i_2] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((2685049554U) - (2685049554U))))))));
                            arr_39 [i_1] [i_2] [i_3 + 1] = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_12 [i_1] [10U] [i_3])))))))), (arr_34 [i_1] [i_2] [i_3] [i_9])));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned char) ((unsigned short) var_13));
                        var_29 = ((/* implicit */unsigned char) var_8);
                    }
                    var_30 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */int) arr_15 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1])), (var_4))));
                }
                arr_42 [i_1] [(unsigned short)14] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_30 [6] [i_2] [6] [i_2] [(short)9])), (var_7))), (((/* implicit */unsigned int) 1334877029))))) ? (min((((/* implicit */unsigned int) max((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]), (var_6)))), (min((arr_8 [i_1]), (((/* implicit */unsigned int) (unsigned short)44584)))))) : (max((((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_2] [i_2])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_16)))))));
                /* LoopSeq 2 */
                for (short i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) var_11);
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (signed char i_13 = 3; i_13 < 15; i_13 += 2) 
                        {
                            {
                                arr_53 [i_11] [3U] [i_11] [i_13] = max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [1LL] [1LL] [i_11 + 2] [i_11 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_40 [i_1] [i_12] [i_11] [12U] [i_11 + 1] [i_11 + 1])) : (arr_24 [i_11] [(signed char)12] [i_11 + 1] [i_11 + 1] [i_11])))));
                                arr_54 [i_1] [i_11] = ((/* implicit */unsigned int) arr_34 [i_13] [i_13 - 1] [i_13] [i_13 - 1]);
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) 2959551858U))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_14 = 1; i_14 < 15; i_14 += 1) /* same iter space */
                {
                    arr_57 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_17))) << (((arr_12 [i_14 + 3] [i_14 + 1] [i_2]) - (1213671929)))));
                    arr_58 [i_14] [i_2] [i_14] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2231197217U)) ? (var_12) : (1334877029))))));
                    arr_59 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_14 + 1] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_14 [i_2] [i_14 + 1] [i_14] [i_14 - 1])) : (((/* implicit */int) arr_14 [5] [i_14 + 1] [i_14] [i_14 - 1]))));
                    var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40977))) + (var_14)));
                }
            }
        } 
    } 
}
