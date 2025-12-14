/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16555
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
    var_20 &= ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((arr_1 [i_1]) << (((-1LL) + (17LL))))))))));
                var_22 = max((((/* implicit */long long int) ((unsigned char) arr_2 [i_0]))), (((((/* implicit */long long int) ((((/* implicit */int) (short)-6)) * (0)))) + ((-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_10 [i_2] [i_3] [i_2 + 1]);
                                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)6838)))))));
                                var_25 = ((/* implicit */unsigned char) ((arr_13 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]) >> (((arr_13 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]) - (112082357418171959LL)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) arr_2 [i_2]);
                    var_27 = ((/* implicit */long long int) var_7);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_8]))));
                                var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18)))) / (435332678)));
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_4 [i_7]))));
                                var_31 = ((/* implicit */long long int) max((var_31), (var_19)));
                                var_32 = ((/* implicit */int) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */int) (unsigned short)19945);
        var_34 ^= ((/* implicit */unsigned char) var_3);
        var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2])) < (((/* implicit */int) (_Bool)1)))))));
        var_36 |= ((/* implicit */short) (+((+(((/* implicit */int) var_7))))));
    }
    for (short i_9 = 1; i_9 < 9; i_9 += 1) 
    {
        var_37 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)6)) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)45587)), (-999922128)))))));
        var_38 = ((/* implicit */_Bool) (-(((((/* implicit */int) max((arr_8 [i_9 - 1] [i_9]), (((/* implicit */unsigned short) arr_10 [12LL] [i_9 + 1] [12LL]))))) | (-999922128)))));
    }
    var_39 = ((/* implicit */unsigned int) ((((max((((/* implicit */int) var_4)), (var_16))) % (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (1991088493))))) / (((/* implicit */int) var_17))));
    var_40 = ((/* implicit */long long int) (-(999922117)));
}
