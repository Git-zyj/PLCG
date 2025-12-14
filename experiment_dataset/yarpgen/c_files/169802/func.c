/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169802
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (var_7)));
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [6ULL])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned short) (~(var_13)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)27877)) * (((/* implicit */int) arr_0 [i_1 - 1])))))))));
        arr_8 [0LL] [(short)0] &= (!(var_6));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_20 &= ((/* implicit */_Bool) arr_11 [4LL] [4LL]);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 &= ((/* implicit */short) (+(((arr_13 [i_2] [i_3 + 2] [i_2]) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) var_11))))));
                    var_22 ^= ((/* implicit */_Bool) var_15);
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) arr_16 [i_2] [i_3 - 1] [i_3 - 1] [(_Bool)1]);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >> ((((-((+(arr_27 [i_7] [i_8] [i_8]))))) - (4246139533U)))));
                                arr_34 [i_5] [(_Bool)1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_28 [8ULL])), (var_13)))) ? (((/* implicit */int) min((arr_28 [i_6]), (arr_28 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) (unsigned short)27889)) : (((/* implicit */int) (short)-5563))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_5])) + (((/* implicit */int) arr_24 [i_7]))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((((/* implicit */int) arr_29 [i_5] [i_5] [i_6] [i_7])) << (((((arr_20 [i_7] [18LL]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7]))))) - (82395U))))))))));
                    arr_35 [i_5] [i_5] [(short)5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)27870)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27877))) : (8693048863080421431LL))), (((((/* implicit */_Bool) arr_28 [(_Bool)1])) ? (((/* implicit */long long int) arr_20 [i_5] [i_7])) : (arr_23 [(unsigned short)16])))))) ? (arr_30 [15LL] [i_7] [i_6] [i_5]) : (((((/* implicit */_Bool) arr_28 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (arr_28 [i_6]))))) : (((arr_30 [i_5] [i_6] [i_6] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
