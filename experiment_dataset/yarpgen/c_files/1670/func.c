/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1670
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 += ((/* implicit */short) max((((((((/* implicit */int) var_15)) != (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) var_8)) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (33292288U))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~((-(33292288U)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (~((~(arr_1 [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (+(((arr_0 [i_1]) << (((33292288U) - (33292287U)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) arr_0 [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) var_2);
                        var_20 *= ((/* implicit */_Bool) arr_1 [i_3]);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] |= var_16;
                            arr_18 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_2]) ? (arr_16 [i_1] [i_3]) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_12 [i_1 + 1]))));
                            var_21 += ((/* implicit */_Bool) (~(arr_2 [i_1 - 1])));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1])))))));
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_9 [i_1 + 1] [i_2] [i_6 - 1])));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = var_10;
                                var_25 = (!(((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_7] [i_8])));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_8)) & (3208276544565688953ULL))) * (((/* implicit */unsigned long long int) arr_2 [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_32 [i_9] [i_9] = ((/* implicit */int) var_2);
        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    }
    for (int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */long long int) var_1);
        arr_37 [i_10] = ((/* implicit */long long int) max((1856779075U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4623148644737701142LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (((((+(9223372036854775807LL))) / (((/* implicit */long long int) arr_2 [i_10])))) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)62050)) ? (4261675007U) : (33292288U)))))))))));
        arr_38 [i_10] = ((/* implicit */unsigned short) 3942348745806770079LL);
    }
    var_29 = ((/* implicit */int) -4623148644737701153LL);
}
