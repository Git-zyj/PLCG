/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147410
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) 318577586867749741ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) ? (max((((var_13) ? (var_16) : (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_7)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9697)) ? (((/* implicit */int) ((((/* implicit */int) (short)-8391)) > (((/* implicit */int) (short)5))))) : (((/* implicit */int) (short)9683))));
                        var_20 = ((/* implicit */long long int) ((((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) << (((((((/* implicit */_Bool) 8891725219683913483ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) - (29725)))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4580))) <= (var_3))))));
                            var_21 = ((/* implicit */signed char) (short)22339);
                            var_22 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-9706))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (arr_17 [(unsigned short)1] [i_1] [(signed char)5] [i_1] [i_3 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-9706)))) | (((/* implicit */int) (short)-22337))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            arr_21 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */unsigned long long int) (~((~(var_14)))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            arr_24 [i_0] [12U] [i_3 + 1] [(short)4] = var_0;
                            var_26 = ((/* implicit */unsigned long long int) ((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-8332983883355972530LL))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_25 [8U] [8U] [i_2] [i_2] [(signed char)12] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_0] [i_2] [i_3 + 1] [i_3] [i_7] [i_3] [i_7 + 1]))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)-22000)) ? (-5495889922312280360LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) + (9223372036854775807LL))) << (((((/* implicit */_Bool) (short)14315)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-26583))))))) ? (min(((-(8784968834997785936ULL))), (((/* implicit */unsigned long long int) arr_18 [i_1] [6ULL] [i_8] [i_9])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)12715)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-13LL))) << ((((-(((/* implicit */int) (short)-6899)))) - (6861))))))));
                            var_28 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65524))));
                        }
                        var_29 |= max((((max((arr_12 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0] [i_8]), (((/* implicit */unsigned long long int) arr_6 [i_8])))) >> (((((/* implicit */int) (short)22342)) - (22294))))), (((/* implicit */unsigned long long int) min((arr_0 [i_2]), (((/* implicit */unsigned int) (unsigned short)24477))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */short) max(((-(max((((/* implicit */long long int) (signed char)0)), (-5495889922312280353LL))))), (((/* implicit */long long int) (((~(var_3))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)23783))))));
                        arr_33 [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-37)), (2481175100147549361ULL)))) || (((/* implicit */_Bool) (+(6377611980330155086ULL)))))))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((short)-26683), (((/* implicit */short) (signed char)0))))), (((((/* implicit */_Bool) arr_23 [i_1] [i_11 + 1])) ? (-5495889922312280334LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 14; i_13 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */short) 0ULL);
                                var_34 |= ((/* implicit */unsigned long long int) var_7);
                                var_35 -= ((/* implicit */signed char) (short)-14389);
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 1) 
                {
                    arr_43 [i_0] [i_14] [i_0] [i_14] = ((arr_11 [i_1]) & ((-(arr_35 [i_0] [i_14 - 1] [i_14 + 1]))));
                    arr_44 [(signed char)2] [14LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)18771);
                }
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) var_11);
    var_37 ^= 7407328854366481843ULL;
    var_38 = ((/* implicit */long long int) (unsigned short)24625);
}
